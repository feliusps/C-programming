/*The population of a city has risen sharply over the past few years, thanks to a 
high birth rate. However, this poses a number of problems, including a 
housing shortage. The mayor has decided to deal with the problem and 
would like to estimate the future growth of the population, and he has called you
in to help! Please write a C-program that first reads an integer representing 
the current population of the city, and that next reads a decimal number 
for the projected population growth as a percentage (either positive or negative).
The program should then display the expected population of the city in a year 
as a whole number. By convention we will only consider "whole" people.
So a population of 31.8 inhabitants will be considered as having 31 inhabitants.*/

#include<stdio.h>

int main(void)
{
//variable declaration and definition
int current_population;
double projected_population_growth;
int expected_population;
int expected_population_cast;

//input data
printf("Input current population of the city not decimals\n ");
scanf("%d", &current_population);

printf("Input projected population growth decimal/percentage\n ");
scanf("%lf", &projected_population_growth);

//calculation
projected_population_growth = (projected_population_growth / 100);
expected_population = current_population + projected_population_growth * current_population;
expected_population_cast = (int)expected_population;
printf("The population of the city next year will be %d",expected_population_cast ); 

return 0;

}