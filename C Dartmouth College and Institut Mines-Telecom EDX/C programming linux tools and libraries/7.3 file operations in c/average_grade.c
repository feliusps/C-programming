/*You are teaching a class on C-programming! You would like to find out whether 
your teaching has been effective, and so you need to compute the average 
grade your students have received on the most recent assignment. These grades 
(integers) are stored in the file studentGrades.txt.

The first entry in the file (an integer) is the number of student grades 
that are stored in the file. For example, if the file was as follows:

9
56 3 8 11 0 45 55 2 78
this would mean that there are 9 grades stored in the file (starting with 56 
and ending with 78).

Your job is to calculate and print out the average of the grades stored in the file. Please print the average grade with two decimal places.

Things to consider:
To test your program you need to create your own file "studentGrades.txt" 
with grades stored as described. In weblinux you can do so by first typing 
"touch studentGrades.txt" at the command prompt and then opening, editing 
and saving the file studentGrades.txt in the file editor. When you submit 
your program to taskgrader we will provide an input file for testing purposes. 
It is thus crucially important that the file from which you are reading 
in your program is indeed named "studentGrades.txt". */ 


#include <stdio.h>

int main(void) {
    FILE *ifile;  /* ifile is a variable name - you could use any other name here. 
                     However, the '*' is important - we are working with a pointer. 
                     We call this a file pointer. */
    int i, num, N, addition = 0;
    double average;
    ifile = fopen("studentGrades.txt", "r"); /* open file for reading. 
                                                     The "r" stands for reading. */
    
    fscanf(ifile, "%d", &N); /* Read first number from the file.
                                Just like scanf(), the only difference is the 
                                file pointer that gets passed in as well. */
                                
    printf("There are %d numbers in the file.\n", N);
    
    for (i = 0; i<N; i++) {
        fscanf(ifile, "%d", &num);
        addition = addition + num;
        
    }
    average = addition / N;
    //printf("the average grades is %.2lf \n", average);
    printf("%.2lf \n", average);
    fclose(ifile); /* closes the file */
    
    return 0;
}


