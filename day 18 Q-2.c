//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main()
{
    int i, a, b, min;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    if(a < b)
        min = a;
    else
        min = b;
    for(i = min; i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            printf("HCF = %d", i);
            break;
        }
    }
    return 0;
}