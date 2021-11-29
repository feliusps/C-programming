/*You arrive in front of a bridge that you must cross to reach a village before dark.
Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to
determine the cost. You decide to write a program to verify that he is charging 
the right price.
Your program should read two integers, between 1 and 6, representing the values
of each die. If the sum is greater than or equal to 10, then you must pay a special
fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice.
Your program must then display the text "Special tax" or "Regular tax" followed 
by the amount you have to pay on the next line.*/

#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    int roll_dice1; 
    int roll_dice2;
    int dice_sum;
    const int special_fee = 36;
    int price_to_pay;

    //input
    printf("Roll the first dice and input the result\n"); 
    scanf("%d", &roll_dice1 );
    printf("Roll the second dice and input the result\n");
    scanf("%d", &roll_dice2); 

    //add the dice result
    dice_sum = (roll_dice1 + roll_dice2);

    if(dice_sum >= 10)
    {
        //special fee
        price_to_pay = special_fee;
        printf("You wiil pay a Special tax of %d coins", price_to_pay ); 
    }

    else
    {
        price_to_pay = 2 * dice_sum;
        printf("You wiil pay a Regular tax of %d coins", price_to_pay);
    }
    
    
    return 0;

}