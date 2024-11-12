#include <stdio.h>

void print_Roll_Name();

int gcd(int a, int b);

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int main() {
    print_Roll_Name();
    printf("Problem Statement: Implement a function that finds the Greatest Common Divisor (GCD) of two numbers using recursion.\n");

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

int gcd(int a, int b) {  //Using Euclidean algorithm
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
