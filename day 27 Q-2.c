/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

/*#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=(4-i);j--)
         printf(" ");
        for(j=1;j<=(2*i-i);j++)
         printf("*");
    }
    printf("\n");
}*/
/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******

*/

#include <stdio.h>
void main()
{
    int i, j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=4-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=2*i-1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}