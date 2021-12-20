/*Write a C-program that prints out a word as many times as specified. 
The number of repetitions and the word should be given as input to the program.
You may assume that the word has no more than 100 characters 
(be sure to also reserve space for the null terminator, \0, though!).*/

#include<stdio.h>

int main(void)
{
    //variable declaration and defitition
    char word[101];
    int repetitions;
    int i;
    
    printf("How many time do you want the word to be repited?\n");
    scanf("%d", &repetitions);
    printf("Please write a word up to 100 characters\n");
    scanf("%s", word);  //do no put & for array characters  
    printf("The word will be repited %d times\n", repetitions );
    //for loop for repetition in column
    for(i = 0; i < repetitions; i++)
    {
        printf("%s.\n", word);
    }
    
return 0;   
}