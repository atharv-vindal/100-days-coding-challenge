//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>

int main()
{
    int a, b, i;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    if(a > b)
        i = a;
    else
        i = b;

    while(1)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("LCM = %d", i);
            break;
        }
        i++;
    }

    return 0;
}