/*Write a C-program that reads an input character (using scanf) and displays
the following pyramid pattern using the character read: */



#include <stdio.h>

//main begin
int main(void)
{
    //variable declaration and definition
    char symbol ;
   
    // user input
    printf("Please enter an character: ");
    scanf("%c", &symbol);
    printf("I read the symbol %c\n", symbol);

    //print pyramid
    printf("++++%c++++\n", symbol);
    printf("+++%c%c%c+++\n", symbol,symbol,symbol );
    printf("++%c%c%c%c%c++\n", symbol,symbol,symbol,symbol,symbol);
    printf("+%c%c%c%c%c%c%c+\n", symbol,symbol,symbol,symbol,symbol,symbol,symbol);
    printf("%c%c%c%c%c%c%c%c%c\n", symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol);


    return 0;
}
