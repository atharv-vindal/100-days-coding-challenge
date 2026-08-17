//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 integers : ");
    scanf("%i %i %i",&a,&b,&c);
    if(a>=b && b>=c)
    {
        printf("%i is the largest ",a);
    }
    else if(b>=c && c>=a)
    {
        printf("%i is the largest",b);
    }
    else if(c>=b && b>=a)
    {
        printf("%i is the largest ",c);
    }
}
