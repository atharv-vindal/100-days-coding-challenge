//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
    int a ,a1=0 ,b=0;
    printf("Enter a Number : ");
    scanf("%d",&a);
    a1=a;
    while(a>0)
    {
        b=b*10 + a%10;
        a=a/10;
    }
    if(b==a1)
     printf("Palindrome");
    else
     printf("Not Palindrome");
}