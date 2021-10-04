#include<stdio.h>
#define PI 3.14159

int main()
{
    //find the area for any given radius
    //variable declaration
    double area = 0.0, radius = 0.0;

    printf("Enter Radius: ") ;
    scanf("%lf", &radius); // input from user
    area = PI * radius * radius; //area formula
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}