/*In order to be able to better fight various epidemics in a region,
the department of medicine of a major university has launched a large study.
Researchers are interested in how fast an epidemic spreads, and therefore
the speed at which health measures must be put in place. Your program should 
first read an integer representing the total population of the area. Knowing
that a person was infected on day 1 and that each infected person contaminates
two new people every day, you must calculate the day at which the entire 
population of the area will be infected.*/

#include<stdio.h>
int main(void)
{
  //variable declaration and definition 
  int area_total_population = 0;
  int day = 1;
  int newinfected = 1;
  int total_infected = 1;

  //ask input data
  printf("Please introduce the area total population\n");
  scanf("%d", &area_total_population); 
  
  while (total_infected < area_total_population )
       {
           day = day + 1;
           newinfected = 2 * newinfected;
           total_infected = total_infected + newinfected;
           newinfected = total_infected;
                       
       }
  printf("Total pupulation is infected at day: %d\n", day);
}




/*#include <stdio.h>
int main(void) {
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 3;
    int totalSignatures = 3;
    while (totalSignatures < 1000) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}*/