#include <stdio.h>

void print_Roll_Name()
{
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}


int main() {

    print_Roll_Name();
    printf("1. Calculate the size of various data types in bytes, then print the size in bits.\n");
    printf("Size of char: %lu bytes, %lu bits\n", sizeof(char), sizeof(char) * 8);
    printf("Size of int: %lu bytes, %lu bits\n", sizeof(int), sizeof(int) * 8);
    printf("Size of float: %lu bytes, %lu bits\n", sizeof(float), sizeof(float) * 8);
    printf("Size of double: %lu bytes, %lu bits\n", sizeof(double), sizeof(double) * 8);
    printf("Size of long: %lu bytes, %lu bits\n", sizeof(long), sizeof(long) * 8);
    printf("Size of long long: %lu bytes, %lu bits\n", sizeof(long long), sizeof(long long) * 8);
    printf("Size of short: %lu bytes, %lu bits\n", sizeof(short), sizeof(short) * 8);

    return 0;
}
