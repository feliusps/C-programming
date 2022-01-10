/*You are participating in a game in which players collect points for various solved puzzles. In the end, the player with the highest score wins. 
You would like to know how far behind the highest-scoring person everyone else is in order to know whether you still have a chance at winning. 
Please write a C program that uses a function "behind()" (which you also have to write) in order to help with this task. Your program should first read,
from the user input, the number of players participating in the game. There are never more than 10 players in the game. Next, 
your program should read the current scores of each player and store them in an array. Then you should call the function behind(), 
to which you pass as a first argument, the array holding the player's scores, and as a second argument the number of players in the game. 
The function behind should replace the scores stored in the array with the number of points by which each individual 
player is behind the top-scoring player.
To help you out, the main function of the program has already been written, so your job is simply to write the function behind(), 
whose protype is also given to you.*/


#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    printf("How many players?\n");
    scanf("%d", &N);
    
    //read the score and stored in the array
    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    //call function
    behind(array, N);
    
    for (i=0; i<N; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */

void behind(int *ptr, int N)
{
    
    int i;
    //find largest number in the array
    for (i = 0; i < N; i++ )
    {
        if (ptr[0] < ptr[i])
         {
            ptr[0] = ptr[i];
         }
    }
    
    //make the subtraction
    for (i = 0; i < N; i++ )
    {
        ptr[0] - ptr[i];
    }




}