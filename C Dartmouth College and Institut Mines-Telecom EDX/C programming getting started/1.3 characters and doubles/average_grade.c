/*You are helping a teacher average grades. You get bored computing averages
by hand, so you decide to write a computer program to do the work for you.
Your program must first read an integer indicating the number of grades to 
be averaged. Next, your program will read the grades one by one, all of 
which are integers as well. Finally, your program will calculate and print 
the average of the grades to two decimal places.*/

#include <stdio.h>
int main(void)
{
    // variable declaration and definition 
    int number_of_grades;
    int grade;
    double grade_average;
    int grade_sum = 0.0;
    double grade_sum_cast;
    int i;

    // input data
    printf("input the numbers of grade to be calculates\n");
    scanf("%d", &number_of_grades );
    
    //create for loop to read grade one by one
        for (i = 0; i < number_of_grades; i++)
           {
            //double grade_average;
            // input grades
            printf("Input the class grades one by one\n");
            scanf("%d", &grade );
            printf("I have read %d from the input terminal\n", grade);
            
            //average
            grade_sum = grade_sum + grade;
           
           }
grade_sum_cast = (double) grade_sum;
grade_average = (grade_sum_cast / number_of_grades);
printf("The average grade is %.2lf", grade_average);
return 0;
    
}