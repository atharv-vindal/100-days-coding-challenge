//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>
int main()
{
    int a,b=0,b1=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        b=b*10 + (a%2);
        a=a/2;
    }
    while(b>0)
    {
         b1=b1*10 + b%10;
         b=b/10;
    }
    printf("Binary conversion : %d",b1);
}
