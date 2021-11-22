/*Petra, Rémi and their families went hiking in the mountains together
and realized that distances are measured in different units in France 
and the United States. To help them convert between units, 
please write a program that reads a decimal number representing a 
distance in kilometers and that prints out the corresponding 
distance in miles with 6 decimal places. 
You may use the fact that one kilometer equals 0.621371 miles. */


#include <stdio.h>
int main(void)
 {
    //variable declaration
    double kilometer;
    double milest;
    double kilometers_to_miles;

    // calculation and printing
    printf("Input the distance in kilometers\n");
    scanf(" %lf", &kilometer);
    kilometers_to_miles = (kilometer * 0.621371);
    printf("The distance in miles is %.6lf", kilometers_to_miles);
    return 0;
}