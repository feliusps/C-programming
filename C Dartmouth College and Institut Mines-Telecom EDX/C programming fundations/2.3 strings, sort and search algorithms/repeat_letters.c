/*You are still conducting linguistic research! This time, you'd like to write 
a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of
the word alphabetically (by their ASCII codes). Next, your program should
iterate through the letters of the word and compare each letter with the
one following it. If these equal each other, you increase a counter by 1,
making sure to then skip ahead far enough so that letters that occur more
than twice are not counted again. You may assume that the word you read
from the input has no more than 50 letters, and that the word is all
lowercase.*/

#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    char word[50];
    int n = 0  ;
    int i, j;
    char swap;
    int counter = 0;

    printf("please write a word to be sorted\n");
    scanf("%s", word);
    
    // count the word's letters
    
    while(word[n] != '\0')
    {
        n++;
    }

    printf("Unsorted word: \n");
    for (i=0; i<n; i++)
    {
        printf("%c ", word[i]);
    }
    
    // to sort apply bubble sort
     for (j=0; j<n-1; j++)
     {
        for (i=0; i<n-1; i++)
        {
            if (word[i] > word[i+1])
            {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
     }
    
    printf("\nSorted word: \n");
    for (i=0; i<n; i++)
    {
        printf("%c ", word[i]);
        
    }
    
    i=0;
    ////Check for repeating characters and count in the sorted word
    while(i < n - 1)
    {
        if(word[i] == word[i+1])
        {  
            counter++;
           //jump over 2 positions to compare caracters
           j =i + 2; //jump over the compare caracters
           //Continues through the word to find a new caracter but no counting
           while((j < n && word[i] == word[j]))
           {
                j++;
                
           }
        i = j; //to start i after the repeted character
        }
        
        else
        {
            i++;
        }


    }
    
    printf("\n%d", counter);
    return 0;
}