//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>
void main()
{
    int n,b=0,p=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        if(b%2==1)
         p *= b;
        n=n/10;
    }
    if(p>1)
     printf("Product : %d",p);
    else if(p=1)
     printf("No odd numbers");
}