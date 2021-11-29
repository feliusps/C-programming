/*You are planning a car trip so you post on a carpooling website in order 
to share the cost of the trip. If you have 0 passengers the carpool site 
does not charge anything and you alone pay the full cost of the trip.
If you have 1 or more passengers the carpool site adds a $1 fee to 
the cost of the trip and evenly divides the total cost ($1 fee + gas)
among the passengers and you. You want to write a program that calculates 
the cost you have to pay. The program should read the number of passengers 
(an integer) and the cost of gas for the trip (a decimal number).
The program should then print the cost that you have to pay (a decimal number)
 with 2 digits after the decimal point.*/

 #include <stdio.h>

 int main(void)
 {
     
    //variable declaration and definition
     double cost_to_pay;
     int number_of_passangers;
     int total_number_travelers;
     double cost_of_gas; //cost of gast per trip 
     const double fee = 1.0; // fees website charge

     printf("Input the number of passengers to travel\n");
     scanf("%d", &number_of_passangers);
     printf("Input the cost of gas\n");
     scanf("%lf", &cost_of_gas);


         if (number_of_passangers)
            {
              total_number_travelers = number_of_passangers + 1;
              cost_to_pay = ((fee + cost_of_gas) / (total_number_travelers));
              printf("You are going to pay %.2lf for the trip", cost_to_pay );
         }
         else
         {
              total_number_travelers = number_of_passangers + 1;
              cost_to_pay = ((cost_of_gas) / total_number_travelers);
              printf("You are going to pay %.2lf for the trip", cost_to_pay );
         }

 
    return 0;
}