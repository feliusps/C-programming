/*Much of the work of a university administration 
(in addition to managing teachers, researchers, students, courses, etc.)
is to ensure the proper functioning of the university and in particular 
that the accounting job is well done. Once a year, an annual report of 
expenditures must be made.
All expenses for the year have been recorded and classified in a multitude
of files and the sum of all these expenses must now be calculated.
But no one knows exactly how many different expenses have been made in the 
past year! Your program will have to read a sequence of positive integers 
and display their sum. We do not know how many integers there will be, but 
the sequence always ends with the value -1 
(which is not an expense, just an end marker).*/

#include<stdio.h>

int main(void)
{
    //variable declaration and definition
    int expenses = 0;
    int total_sum = 0;

    //write a while loop because we do not know how many expenses
    while(expenses != -1)
    {
        
        printf("Read the expenses\n");
        total_sum = total_sum + expenses;
        scanf("%d", &expenses);
        
        
    }

    printf("The total amount expenses in the year was %d", total_sum);

    return 0;

}