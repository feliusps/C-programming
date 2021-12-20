
/*You just computed final scores for all of the students in your classroom and 
would like to tell each student their ranking when compared to the other students 
in your class. For example, if Remi's score is 14, Yan's score is 2 and Maria's 
score is 20 then Remi's ranking is 2 since he has the second highest score,
Yan's ranking is 3 since he has the lowest score and Maria's ranking is 1 
since she has the highest score amongst the three students.
You'll be given the following inputs: first the number of students, then all 
of the students' final scores, then finally, all of the students' names. 
Be sure to look at the example below.
Your output should be one line per student, with each line displaying 
the student's name followed by "rank is" followed by the student's rank.
The order in which names are displayed in the output should be the same as 
the order given in the input. The ranking starts at 1 (meaning this student
has the highest score), 2 for the second highest grade etc...
Note that no name has more than 50 characters and there are no more than 30 
students.
*/

#include<stdio.h>

int main(void)
{
   // variable declaration and definition
   int student_number;
   int score[30];
   int ranking = 0;
   char *students_name[50];
   int i = 0, j = 0, swap;
   

   printf("how many student are in the classroom\n"); 
   scanf("%d", &student_number );
   
   // ask the score for each student to create a array
   for(i = 0; i < student_number; i++ )
   {
       printf("Please write the student score\n");
       scanf("%d", &score[i]);

   }

     
     //ask for the names and print the ranks
    for(j = 0; j < student_number; j++)
   {
        printf("\nPlease write the student name\n");
        scanf("%s", students_name[j]);
        for (i = 0; i < student_number-1; i++)
        {
            if (score[i] < score[i+1])
            {   
                ranking = ranking +1 ;
            }
            printf("%s rank is %d\n", students_name, ranking);    
        }
        
        
   }

    
    
    return 0;
}