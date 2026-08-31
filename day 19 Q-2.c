//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>
int main()
{
    int a,b=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum += b;
        a = a/10;
    }
    printf("Sum : %d",sum);
}