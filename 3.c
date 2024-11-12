#include <stdio.h>

void print_Roll_Name()
{
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

void add();
void sub();
void mul();
void div();

int main() {

    print_Roll_Name();
    printf("3. Generate a menu based simple calculator with functions for addition, subtraction, multiplication and division using switch statement.\n");

    
    int choice;
    do {
        printf("\nSimple Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;    
}

void add() {
    float a, b;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void sub() {
    float a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void mul() {
    float a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void div() {
    float a, b;
    printf("Enter two numbers to divide: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}