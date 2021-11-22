/*You just started learning a new language and decide to buy a few books to practice.
Thankfully you quickly find a book seller who offers every book for the 
same low fixed price. You have a certain amount of money and 
you would like to know how many books of the same price you can purchase.
Please write a C-program that starts by reading the amount of money you have
(which may be a double), then reads the price per book (which again may be a double).
The program should then display an integer, namely the largest number of books 
that you can purchase with the given amount of money.*/

#include<stdio.h>

int main(void)
{

    //variable declaration and definition
double amount_of_money;
double book_price;
double book_quantity;
int book_quantity_cast;
//calculation
printf("how much money do you have for books\n");
scanf("%lf", &amount_of_money );
printf("");
printf("which is the book'flat price\n");
scanf("%lf", &book_price);

//calcutation
book_quantity = amount_of_money / book_price;
book_quantity_cast = (int) book_quantity;
printf("you can buy %d books", book_quantity_cast);

return 0;


}