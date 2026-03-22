import struct

path = "/Users/alex/Documents/Git/leanprover/lean4/build/release/stage1/lib/lean/libleanshared_1.dylib"
with open(path, "rb") as f:
    data = f.read()  # read entire file

magic, cputype, cpusubtype, filetype, ncmds, sizeofcmds, flags = struct.unpack_from("<IIIIIII", data, 0)
load_cmds_end = 32 + sizeofcmds
print(f"file size:      {len(data)} bytes (0x{len(data):X})")
print(f"sizeofcmds:     {sizeofcmds} (0x{sizeofcmds:X})")
print(f"load_cmds_end:  {load_cmds_end} (0x{load_cmds_end:X})")

for i in range(load_cmds_end, len(data)):
    if data[i] != 0:
        gap = i - load_cmds_end
        print(f"first non-zero: offset 0x{i:X}")
        print(f"headerpad gap:  {gap} bytes (0x{gap:X})")
        if gap >= 0xFFFF:
            print("✅ -headerpad 0xFFFF worked")
        elif gap >= 200:
            print(f"⚠️  some padding present but less than requested")
        else:
            print("❌ lld ignored -headerpad")
        break
