#include <stdio.h>

void print_Roll_Name()
{
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

typedef struct {
    float real;
    float imaginary;
} Complex_Num;


Complex_Num add_comp(Complex_Num , Complex_Num);
Complex_Num sub_comp(Complex_Num , Complex_Num);
void print_comp(Complex_Num);

int main()
{
    print_Roll_Name();
    printf("2. Demonstrate the use of typedef by creating a custom data type that represents Complex numbers (float real and float imaginary)\n and performs basic operations like addition and subtraction.\n");

    Complex_Num num1 = {3.0, 4.0};
    Complex_Num num2 = {1.0, 6.0};

    Complex_Num sum = add_comp(num1, num2);
    Complex_Num difference = sub_comp(num1, num2);

    printf("First ");
    print_comp(num1);
    printf("Second ");
    print_comp(num2);
    printf("Sum ");
    print_comp(sum);
    printf("Difference ");
    print_comp(difference);

    return 0;
}

Complex_Num add_comp(Complex_Num x, Complex_Num y)
{
    Complex_Num result;
    result.real = x.real + y.real;
    result.imaginary = x.imaginary + y.imaginary;
    return result;
}

Complex_Num sub_comp(Complex_Num x, Complex_Num y) {
    Complex_Num result;
    result.real = x.real - y.real;
    result.imaginary = x.imaginary - y.imaginary;
    return result;
}

void print_comp(Complex_Num x){
    printf("\n %f + %fi\n",x.real , x.imaginary );
}