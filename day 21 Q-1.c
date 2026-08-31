//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, first, last, digits = 0, middle, result;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    middle = (n % (int)pow(10, digits)) / 10;
    result = last * (int)pow(10, digits) + middle * 10 + first;
    printf("%d", result);
    return 0;
}