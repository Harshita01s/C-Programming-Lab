#!/bin/bash

# Prompt for new name and roll number
read -p "Enter the new name: " new_name
read -p "Enter the new roll number: " new_roll

# Loop through all .c files in the directory
for file in *.c; do
    # Check if the file contains the print_Roll_Name function
    if grep -q "void print_Roll_Name()" "$file"; then
        # Use sed to replace the name and roll number
        sed -i "s/Harshita Sharma/$new_name/" "$file"
        sed -i "s/Roll:23BCS081/Roll:$new_roll/" "$file"
        echo "Updated $file"
    fi
done
