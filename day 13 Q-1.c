//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter 2 operands and 1 operator : ");
    scanf("%d %d %c",&a ,&b ,&c);
    switch (c) {
        case '+':
            printf("Sum : %d ",a+b);
            break;
        case '-':
            printf("Difference : %d ",a-b);
            break;
        case '*':
            printf("Product : %d ",a*b);        
            break;
        case '/':
            printf("Division : %d ",a/b);
            break;
        case '%':
            printf("Remainder : %d ",a%b);
        default:
            printf("Enter a proper symbol");
            break;
    }
}