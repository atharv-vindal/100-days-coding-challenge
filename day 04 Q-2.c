//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<stdio.h>
void main()
{
    int i, n, n1, sum=0;
    printf("Enter n : ");
    scanf("%u",&n);
    n1 = n;
    for (i = 1 ; i <= n ; i++ )
    {
        sum = sum + i;
    }    
    printf("sum of 1st %d natural numbers is %d",n1,sum);
}