#include<stdio.h>
#define PI 3.14159

//main begin
int main(void)
{ 
 double radius; // variable declaretion
 printf("Enter radius:");
 scanf("%lf", &radius); //format specifier change to double %lf	Floating point	double
printf("volume is : %lf \n\n", 4 *radius*radius*radius/3 ); //format specifier change to double %lf	Floating point	double
return 0;
}