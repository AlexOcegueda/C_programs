#!/bin/bash

# Check if the number of arguments is correct
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <variable>"
    exit 1
fi

variable="$1"

clang main.c -o DynamicArray

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    # Run the program with the provided variable as an argument
    ./DynamicArray "$variable"
else
    echo "Compilation failed. No program to run."
fi
