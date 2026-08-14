//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>
int main()
{
    int s,s1,m,h;
    printf("Enter time in seconds : ");
    scanf("%d",&s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s1 = s % 60;
    printf("time in hours min second format is  %d : %d : %d ",h,m,s1);

}