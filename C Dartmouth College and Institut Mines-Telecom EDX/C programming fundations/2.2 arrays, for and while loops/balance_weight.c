
/*You are responsible for a rail convoy of goods consisting of several boxcars. 
You start the train and after a few minutes you realize that some boxcars are 
overloaded and weigh too heavily on the rails while others are dangerously light.
So you decide to stop the train and spread the weight more evenly so that all 
the boxcars have exactly the same weight (without changing the total weight).
For that you write a program which helps you in the distribution of the weight.
Your program should first read the number of cars to be weighed (integer) 
followed by the weights of the cars (doubles). Then your program should calculate
and display how much weight to add or subtract from each car such that every car 
has the same weight. The total weight of all of the cars should not change. 
These additions and subtractions of weights should be displayed with one decimal
place.
You may assume that there are no more than 50 boxcars.*/

#include <stdio.h>

int main(void)
{
    //variable declaration and definition
    int number_of_cars;
    double weights_of_cars;
    double array[50];
    double total_weight = 0.0;
    double average_weight;
    double sum_add;
    int index;
    
  
   //read input weight from user
   printf("Please enter the number of cars\n"); 
   scanf("%d", &number_of_cars);
      
    for(index = 0; index < number_of_cars; index++)
    {
        printf("Enter the weight of the car as decimal value:\n");
        scanf("%lf", &weights_of_cars);
        array[index] = weights_of_cars;
        total_weight = total_weight + array[index];
        
    }

    average_weight = (total_weight / number_of_cars);
    printf("the average for each car should be %.1lf\n", average_weight);
  
  //output calculations
    for(index = 0; index < number_of_cars; index++)
    {  
        //add of subtract weight
        sum_add = (average_weight - array[index]);
        printf("The weight for balance the cars %.1lf\n", sum_add );
        
    }

    
    return 0;
}