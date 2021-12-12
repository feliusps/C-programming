/*Your grandparents gave you a fantastic cooking recipe but you can never remember
how much of each ingredient you have to use! There are 10 ingredients in the 
recipe and the quantities needed for each of them are given as input (in grams). 
Your program must read 10 integers (the quantities needed for each of 
the ingredients, in order) and store them in an array. It should then read an 
integer which represents an ingredient's ID number (between 0 and 9),
and output the corresponding quantity.*/

#include<stdio.h>

int main(void)
{
    
    //variable declaration and defitition
    int array[10];
    int ingredient_quantity = 0;
    int ingredient_number = 10; //better read from the user
    int index = 0;
    int i = 0;
    int id_number = 0;

    // read each ingredient one by one
    for(i = 0 ; i < ingredient_number ; i++)
    {
        printf("Enter the ingredient quantity\n");
        scanf("%d", &ingredient_quantity);
        array[index] = ingredient_quantity;
        index = index + 1;
    }
    printf("Input the ingredient ID number to find the quantity\n");
    scanf("%d", &id_number);
    printf("the ingredient ID number is %d and the quantity is %d",id_number, array[id_number] );
    
    
    return 0;
}