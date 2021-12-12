/*You plan to make a delicious meal and want to take the money you need to buy
the ingredients. Fortunately you know in advance the price per pound of each
ingredient as well as the exact amount you need. The program should read in
the number of ingredients (up to a maximum of 10 ingredients), then for each 
ingredient the price per pound. Finally your program should read the weight
necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases, 
then display it with 6 decimal places.*/

#include<stdio.h>

int main(void){

  //variable declaration and definition
  int number_of_ingredients;
  double price_per_pound[10];
  double ingredients_weight[10];
  double total_cost = 0;
  int i = 0;

  printf("Write the number of ingredients need it for the recipe\n"); 
  scanf("%d", &number_of_ingredients );
  
  //create three for loop to get the right output
  for(i = 0; i < number_of_ingredients; i++)
  {
      printf("Write the price per pound for each ingredients\n");
      scanf("%lf", &price_per_pound[i]);
      printf("%lf", price_per_pound[i]);
      printf(" \n");
      
  } 

  for(i = 0; i < number_of_ingredients; i++)
  {
      printf("Write the weight for each ingredients\n");
      scanf("%lf", &ingredients_weight[i]);
      printf("%lf", ingredients_weight[i]);
      printf(" \n ");
  }

  for(i = 0; i < number_of_ingredients; i++)
  {
    total_cost = total_cost + (price_per_pound[i] * ingredients_weight[i] );
  }
  
  printf("the total cost of the recipe is %.6lf", total_cost ); 
  return 0;    
}