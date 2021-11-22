/*You are building a new home and you have calculated exactly how much cement you need
for the foundation. Ideally you'd like to purchase this exact amount of cement, 
but the store only sells cement in 120-pound bags. Each of these bags costs 45 dollars.
Please write a C-program that calculates the cost of the cement you will have to 
purchase to build your foundation.
Your program should first read a decimal number representing the amount of cement 
needed (in pounds) for the foundations of your new home. 
Your program should then display the total cost of the cement bags you have 
to purchase to have enough cement to build your foundation. 
To make your program simpler, you are guaranteed that the amount of cement
needed will NEVER be a multiple of 120.*/

#include<stdio.h>


int main(void)
{
    //variables declaration and definition
    int bag_cost = 45;
    int bag_weight = 120; // in pounds
    double amount_of_cement_needed; // in pound
    double bags_needed;
    int total_cost;
    int bags_needed_cast;
    

    printf("how many pound of cement will you need in pound?\n");
    scanf("%lf", &amount_of_cement_needed);

    //calculation
    bags_needed = (amount_of_cement_needed / bag_weight) + 1; //add 1 truncate 
    bags_needed_cast = (int) bags_needed; //cast to int
    total_cost = bags_needed_cast * bag_cost;
    printf("Total cost %d US$",total_cost);


}