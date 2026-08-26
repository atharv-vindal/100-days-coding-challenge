//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main()
{
    int a,i,j=0;
    printf("Enter a Number : ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        j += 1;
    }
    if(j>0||a==0||a==1)
     printf("Not Prime");
    else
     printf("Prime");
}