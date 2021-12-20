/*Your job is to find the length of the longest word in a text with 
no punctuation or special characters of any kind - only contains words.
To do so, please write a C-program that takes as a input first the number
of words in a text, followed by all of the words in the text. The output 
of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed
100 characters.*/

#include<stdio.h>

int main(void)
{
    //variable definition and declaration
    int number_of_words;
    char word[11];//maximun length of characters in a word
    int i = 0; 
    int j = 0;
    int longest_word = 0;
    

    printf("What is the number of words in the text\n");
    scanf("%d", &number_of_words);

    //loop for the word in the text
    
    for(j = 0; j < number_of_words; j++ )
    {
        // calculate the length of each word
        //read the text and printed
       
        scanf("%s", word);
        // calculate length of the words
        i = 0;
        //count the lenght of the words 
        while(word[i] != '\0')
        {
            i++;
        }

         //get the longest word
        if(i > longest_word)
        {
            longest_word = i;
        }
        else
        {

        }
           
    }
//print output
printf("The longest word has %d letters\n", longest_word); 

return 0;    
}
