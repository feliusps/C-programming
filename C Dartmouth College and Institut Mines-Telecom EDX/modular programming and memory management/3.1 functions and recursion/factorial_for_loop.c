/*make a program to calculate the factorial of a integer number*/

#include<stdio.h>

int main(void)
{
    #include <stdio.h>
// 5! = 1*2*3*4*5
// n! = 1*2*3*...*(n-1)*n
// variables
    int n, facto, i;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    facto = 1;
    
    if(n<0)
    {
        printf("%d is negative! Aborting..\n", n);
    }
    else
    {
        for(i=1 ; i<=n ; i++)
        {
        facto = i*facto;
        }
        printf("%d! = %d.\n", n , facto);
    }
    return 0;
}