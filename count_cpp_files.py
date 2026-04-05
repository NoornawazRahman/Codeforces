#!/usr/bin/env python3

import os

def count_cpp_files(folder_path):
    count = 0
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            if file.endswith(".cpp"):
                count += 1
    return count

def main():
    current_dir = os.getcwd()

    for entry in sorted(os.listdir(current_dir)):
        full_path = os.path.join(current_dir, entry)

        # Check only immediate subfolders
        if os.path.isdir(full_path):
            cpp_count = count_cpp_files(full_path)
            print(f"{entry}: {cpp_count}")

if __name__ == "__main__":
    main()
