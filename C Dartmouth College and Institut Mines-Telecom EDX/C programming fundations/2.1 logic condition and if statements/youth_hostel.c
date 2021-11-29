/*The hostel in which you plan to spend the night tonight offers very interesting
rates, as long as you do not arrive too late. Housekeeping finishes preparing rooms
by noon, and the sooner guests arrive after noon, the less they have to pay.
You are trying to build a C program that calculates your price to pay based
on your arrival time.
Your program will read an integer (between 0 and 12) indicating the number of hours
past noon of your arrival. For example, 0 indicates a noon arrival,
1 a 1pm arrival, 12 a midnight arrival, etc. 
The base price is 10 dollars, and 5 dollars are added for every hour after noon. 
Thankfully the total is capped at 53 dollars, so you'll never have to pay more
than that. Your program should print the price (an integer) you have to pay,
given the input arrival time.*/

#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    int hours_pass_noon;
    const int BASE_PRICE = 10; //base price minimun
    int total_price;
    const int increase = 5; //added for each hour after noon
    const int capped = 53; //maximun to pay

    //input
    printf("How many hours are the guess past noon\n");
    scanf("%d", &hours_pass_noon );

    if (hours_pass_noon >= 0 && hours_pass_noon < 9)
    {    
        //price adding hours after noon 
         total_price =  BASE_PRICE + (increase *  hours_pass_noon);
         printf(" The total cost is %d dollars\n", total_price ); 
    }
    
    else
    {    //after 53 the cost will be alway the capped cost
         total_price =  capped;
         printf(" The total cost is %d dollars\n", total_price );
    }
    
    return 0;
}