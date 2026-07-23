#!/usr/bin/env python3
"""
Remove UPX signatures from a PE file by zeroing out specific offsets
that contain 'UPX0', 'UPX1', 'UPX2', and 'UPX!' markers.
"""

import sys
import os

def remove_upx_signatures(filename):
    # Offsets to zero out (based on the hexdump analysis)
    offsets_to_zero = [
        0x188,  # 'UPX0' marker
        0x1B0,  # 'UPX1' marker
        0x1D8,  # 'UPX2' marker
        0x200,  # 'UPX!' marker
        0x206,  # Additional 'UPX!' signature bytes
    ]
    
    # Read the entire file
    with open(filename, 'rb') as f:
        data = bytearray(f.read())
    
    # Zero out the specified offsets
    for offset in offsets_to_zero:
        if offset + 4 <= len(data):
            # Zero out 4 bytes (or 5 for UPX! signature)
            if offset == 0x200:
                # UPX! signature is 5 bytes: 'UPX!' + 0x0D
                for i in range(7):
                    data[offset + i] = 0
            else:
                # UPX0, UPX1, UPX2 are 4 bytes
                data[offset:offset+4] = b'\x00\x00\x00\x00'
    
    # Write the modified file
    output_filename = os.path.splitext(filename)[0] + os.path.splitext(filename)[1]
    with open(output_filename, 'wb') as f:
        f.write(data)
    
    print(f"[+] UPX signatures removed. Output saved to: {output_filename}")
    print(f"[+] Original file size: {len(data)} bytes")
    print(f"[+] New file size: {len(data)} bytes (should be same size)")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python remove_signatures.py <pinefan.exe>")
        sys.exit(1)
    
    if not os.path.exists(sys.argv[1]):
        print(f"[-] File not found: {sys.argv[1]}")
        sys.exit(1)
    
    remove_upx_signatures(sys.argv[1])
