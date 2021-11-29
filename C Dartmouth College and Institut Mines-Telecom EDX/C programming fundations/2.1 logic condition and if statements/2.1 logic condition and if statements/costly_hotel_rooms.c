/*The hostel in which you stop for the night changes its prices according to the 
age of the customer and the weight of their luggage. The rules are not very clear,
so you decide to write a small program that will easily allow you and your travel 
companions to know the price of one night.
One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars 
if you are less than 10 years old. For everyone else, the cost is 30 dollars
plus an additional 10 dollars if you bring more than 20 pounds of luggage.
Your program should read the customer's age first, then the weight of their 
luggage, then output the price they have to pay.*/

#include<stdio.h>

int main(void)
{
    //variable decaration and defitinion
    int customer_age;
    int luggages_weight;
    int room_price; 

    //read inputs
    printf("What is yor age\n");
    scanf("%d", &customer_age);
    printf("What is the weight of your luggage\n");
    scanf("%d", &luggages_weight);

    if (customer_age == 60)
       {
          room_price = 0;
       }
    else
        {
            if (customer_age < 10)
               { 
               room_price = 5;
               }
            else
               if (luggages_weight > 20)
                {
                  room_price = 30 + 10 ;
                }
                else
                {
                   room_price = 30; 
                }

        }
    printf("Room price is %d",room_price );
    
    
    return 0;

}