/*We would like you to develop a program capable of making a child play 
automatically the game of "more or less" -- the child must try to guess a secret
number. The program should respond to each guess with "it is more" or "it is less" 
until the child finds the right number.
Your program must first read an integer indicating the number that the child 
will have to find during the game. Next the program should repeatedly read 
the player's guesses and display the text "it is more" if the child has submitted
a smaller number or "it is less" if they have submitted a larger number.
Once the correct number is reached, the program should print 
"Number of tries needed:" followed by a new line and the integer 
number of tries that it took the guesser.*/

 #include<stdio.h>

  int main(void)
  {
      //variable declaration and definition

      int number_to_guess;
      int child_guess;
      int number_of_tries = 1;

      printf("Write a number that the player need to read\n");
      scanf("%d", &number_to_guess);

      printf("Guess the number\n");
      scanf("%d", &child_guess);

      //while loop to compare using if to check for less or more
      while(child_guess != number_to_guess)
      {
          number_of_tries = number_of_tries + 1;

          if (child_guess < number_to_guess)
          {
              printf("it is more\n");
              printf("Please try again\n");
              scanf("%d", &child_guess ); 
          }
          else
          {
             if(child_guess > number_to_guess)
             {
                printf("it is less\n");
                printf("Please try again\n");
                scanf("%d", &child_guess ); 
             
             }
          }
         
      } 
      //outside of the loop to get the result 
      printf("Number of tries needed: %d\n",number_of_tries);

  }