#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    char word[50];
    char letter_t = 't';
    char letter_T = 'T';
    int i = 0;
    int j = 1;
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
   
    //find t or T in first half
    for(j = 0; j < half; j++ )
    {
        if (word[j] == letter_t || word[j] == letter_T)
        {
            printf("%d", FIRST_HALF);
        }
        else
        {

        }
    }
    //find t or T in second half
    for(j = half; j < i; j++ )
    {
        if (word[j] == letter_t || word[j] == letter_T)
        {
            printf("%d", SECOND_HALF);
        }
        else
        {
           
        }
    }
     //not found
    if (word[j] == letter_t || word[j] == letter_T)
        {
            
        }
        else
        {
           printf("%d", NOT_FOUND);
        }
    

return 0;
}