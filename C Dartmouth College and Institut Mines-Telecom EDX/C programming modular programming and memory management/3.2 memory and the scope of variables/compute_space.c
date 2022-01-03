
   

/*A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. 
These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, 
so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should 
read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should 
print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program 
should print 'Invalid tracking code type' and exit.

*/   

#include<stdio.h>

int main(void)
{
    //variables
    int tracking_code_quantity, tracking_code, i, total = 0;
    char code_type;

    printf("Please enter the number of code to read\n");
    scanf("%d", &tracking_code_quantity);

    //succesive tracking 
    for(i=0; i < tracking_code_quantity; i++)
    {
       printf("Write the code number followed by its type\n");
       scanf("%d %c", &tracking_code, &code_type);

       if(code_type == 'i')
        {       
                total += tracking_code * sizeof(int);
        }
        else if(code_type == 'd')
        {
            total += tracking_code * sizeof(double);
        }
        else if(code_type == 'c')
        {
            total += tracking_code * sizeof(char); 
        }
        else{
            printf("Invalid tracking code type");
            //return 0;
        }

    }

printf("Total amount of space required %d bytes\n", total);

return 0;
}