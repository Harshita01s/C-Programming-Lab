#include <stdio.h>

void print_Roll_Name();

void swap(int *a, int *b);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("9. Problem Statement: Demonstrate the concept of call by reference.\n");

    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
