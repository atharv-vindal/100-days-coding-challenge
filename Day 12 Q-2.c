/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Number of Units consumed : ");
    scanf("%d",&n);
    if (n<=100)
     printf("Bill : %d",(n*5));
    else if(n>100 && n<= 200)
     printf("Bill : %d",(500 + (n-100)*7));
    else if(n>200 && n<= 300)
     printf("Bill : %d",(500 + 700 + (n-200)*10));
    else if(n>300)
     printf("Bill :%d",(500 + 700 + 1000 + ( n-300)*12));
    else 
     printf("Units can't be in negative ");
    
}