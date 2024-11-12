#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("12. Swap two strings using pointers.\n");

    char *str1 = "Hello";
    char *str2 = "World";

    printf("Before swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    swapStrings(&str1, &str2);

    printf("After swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
