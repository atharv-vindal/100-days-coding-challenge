/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, product, quotient;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum = %d\n", sum);
    printf("Diff = %d\n", diff);
    printf("Product = %d\n", product);

    if (b == 0)
    {
        printf("Cannot divide by 0\n");
    }
    else
    {
        quotient = a / b;
        printf("Quotient = %d\n", quotient);
    }

    return 0;
}