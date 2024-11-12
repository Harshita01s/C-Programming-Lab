#!/bin/bash

for file in *.c; do
	base_name=$(basename "$file" .c)
	gcc "$file" -o "$base_name.o"
done

for file in *.o; do
	echo "./$file"
	./"$file"
done
