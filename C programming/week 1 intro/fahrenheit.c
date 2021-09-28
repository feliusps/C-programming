/* C for everyone conversion of Fahrenheit to Celsius
C = (F - 32)/1.8 sally coder 08 30, 2017
*/

#include<stdio.h>

int main(void)
{
    //variable declaration
    int fahrenheit, celsius;

    //get user input
    printf("Please enter fahrenheit as an integer;");
    scanf("%d", &fahrenheit );
    celsius = (fahrenheit - 32) / 1.8 ;// conversion to celsius
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
    return 0;

}