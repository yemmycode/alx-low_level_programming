#!/usr/bin/python3

def generate_key(username):
    base_key = 0x1337
    key_length = 19

    for char in username:
        base_key ^= ord(char)
        base_key = (base_key << 3) | (base_key >> 29)  # Rotate left

    key = hex(base_key)[2:]
    key = key.zfill(key_length)

    return key.upper()

if __name__ == "__main__":
    import sys

    if len(sys.argv) != 2:
        print("Usage: ./keygen5.py username")
        sys.exit(1)

    username = sys.argv[1]
    valid_key = generate_key(username)
    print(f"Valid key for {username}: {valid_key}")
