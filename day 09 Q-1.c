//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double x1, x2;
    int d;

    printf("Enter a,b,c for ax^2 + bx + c = 0 : ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d < 0)
    {
        printf("Roots are imaginary");
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2.0*a);
        x2 = (-b - sqrt(d)) / (2.0*a);

        if (x1 == x2)
            printf("Roots are same and real : %f", x1);
        else
            printf("Roots are real and different : %f %f", x1, x2);
    }

    return 0;
}