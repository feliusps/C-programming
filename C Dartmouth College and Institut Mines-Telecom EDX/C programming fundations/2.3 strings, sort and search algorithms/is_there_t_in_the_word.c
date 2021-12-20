/*You are conducting a linguistic study and are interested in finding words that 
contain the letter 't' or 'T' in the first half of the word
(including the middle letter if there is one). Specifically,
if the first half of the word does contain a 't' or a 'T',
your program should output a 1. If the first
half does not contain the letter 't' or 'T', but the second half does, 
then your program should output a 2. Otherwise, if there is no 't' or 'T'
in the word at all, your program's output should be -1. You may assume 
that the word entered does not have more than 50 letters.*/

#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    char word[50];
    char letter_t = 't';
    char letter_T = 'T';
    int i = 0;
    int half ;
    const int FIRST_HALF = 1;
    const int SECOND_HALF = 2;
    const int NOT_FOUND = -1;
    
    //enter a word and check for t or T
    printf("Please write a word: \n");
    scanf("%s", word);
    
    


    //find the half
    while(word[i] != '\0')
    {
        i++;
    }
    half = (i + 1) / 2 ;

    int found = 0;
    i = 0;
    //find t or T in first half
    while(!found && i < half )
    {
        if (word[i] == letter_t || word[i] == letter_T)
        {
            printf("%d", FIRST_HALF);
            found = 1;
        }
        else
        {
            i++;        
        }
    }

//------------------------------------------------------------------
    
    i = half;
    //find t or T in second half
    while(!found && i < (2*half) )
    {
        if (word[i] == letter_t || word[i] == letter_T)
        {
            printf("%d", SECOND_HALF);
            found = 1;
        }
        else
        {
            i++;        
        }
    }
//------------------------------------------------------------------
 i = 0;
    //not  t or T in the word
    while(!found && i < (2*half) )
    {
        if (word[i] != letter_t || word[i] != letter_T)
        {
            printf("%d", NOT_FOUND);
            found = 1;
        }
        else
        {
            i++;        
        }
    }
return 0;
}