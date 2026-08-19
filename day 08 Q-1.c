//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Input a special character : ");
    scanf("%c",&a);
    if (isupper((unsigned char)a))
    {
        printf("Its Uppercase\n");
    }
    else if(islower((unsigned char)a))
    {
        printf("Its lowercase\n");
    }
    else if(isdigit((unsigned char)a))
    {
        printf(" Its digit\n");
    }
    else if(ispunct((unsigned char)a))
    {
        printf("Its symbol\n");
    }
}