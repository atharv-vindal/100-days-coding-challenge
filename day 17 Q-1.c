//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,n3,i=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    n2=n;
    n1=n;
    n3=n;
    while(n2>0)
    {
        n2=n2/10;
        i+=1;
    }
    while(n>0)
    {
        n1 = n%10;
        sum += (int)pow(n1,i);
        n=n/10;
    }
    if(sum==n3)
     printf("Armstrong");
    else
     printf("Not Armstrong");
}