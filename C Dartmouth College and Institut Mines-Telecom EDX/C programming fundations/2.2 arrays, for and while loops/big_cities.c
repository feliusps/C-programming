/*You want to determine the number of cities in a given region that have a 
population strictly greater than 10,000. To do this, you write a program that 
first reads the number of cities in a region as an integer, and then the 
populations for each city one by one  (also integers).*/

#include<stdio.h>

int main(void)
{
    //variable declaration and defitition
    int number_of_cities;
    int population;
    int cities_count = 0;
    int i;

    //input cities quantity
    printf("read the number of cities to calculatae population\n");
    scanf("%d", &number_of_cities); 

    //for loop to find cities greater then 10000
    for(i = 0; i < number_of_cities; i++)
    {
        printf("Write the population for each city\n"); 
        scanf("%d", &population );

        if(population > 10000) // only if is greater than 10000
        {
            cities_count = cities_count + 1 ;
        }
        else
        {
            
        }   
    }

    //print output
    printf("The number of cities with populaton greater than 10000 is %d",cities_count);

return 0;
}