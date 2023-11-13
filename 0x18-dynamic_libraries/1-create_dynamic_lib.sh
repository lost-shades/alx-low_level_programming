#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -name "*.c")

# Check if there are any .c files
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into a shared library (liball.so)
gcc -shared -o liball.so $c_files

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully."
else
    echo "Dynamic library creation failed."
fi

