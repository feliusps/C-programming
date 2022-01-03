/*You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types you use (remember that different data types use different amounts of memory).
To make this easier, you'd like an easy way to track how much memory your variables are going to use. Your job is to write a program that shows, in human-readable form (see below for specifics), 
how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). 
Next it should read an integer that indicates how many variables of the given type you wish to store.
Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers.
In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a 
given type needs.
Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans. 
The following examples illustrate what this means:*/

#include<stdio.h>

int main(void)
{
    //variables
    char data_type;
    int number_of_variables = 0, variable_size, memory_size;
    int MB_convertion, KB_convertion, B_convertion;

    

    //data enter                               
    printf("Enter the data type: \n");                 
    scanf("%c",&data_type);
    

    if(data_type == 'i') //int data type
    {                                
                                             
        printf("How many variables are you going to store\n");
        scanf("%d", &number_of_variables);
        variable_size = sizeof(int);
        memory_size = variable_size * number_of_variables;
         
         //convertion
        KB_convertion = memory_size / 1000;
        B_convertion  = memory_size % 1000;              
        printf("%d KB and %d B\n",KB_convertion, B_convertion);
        
    }
    
    else if(data_type == 's') //short data type
    {                                  
                
        printf("How many variables are you going to store\n");
        scanf("%d", &number_of_variables);
        variable_size = sizeof(short);
        memory_size = variable_size * number_of_variables;
        
         //convertion
        KB_convertion = memory_size / 1000;
        B_convertion  = memory_size / 1000;              
        printf("%d KB and %d B\n",KB_convertion, B_convertion);
    }
        
    else if(data_type == 'c') // char data type
    {                                       
        printf("How many variables are you going to store\n");
        scanf("%d", &number_of_variables);
        variable_size = sizeof(char);
        memory_size = variable_size * number_of_variables;
         //convertion
        KB_convertion = memory_size / 1000;
        B_convertion  = memory_size % 1000;              
        printf("%d KB and %d B\n",KB_convertion, B_convertion);
    }
        else if(data_type == 'd') //double data type
    {                                       
        printf("How many variables are you going to store\n");
        scanf("%d", &number_of_variables);
        variable_size = sizeof(double);
        memory_size = variable_size * number_of_variables;
                
        //convertion
        MB_convertion = memory_size / 1000000; 
        KB_convertion = (memory_size / 1000) %1000;
        B_convertion  = memory_size % 1000; 
        
        printf("%d MB and %d KB and %d B\n", MB_convertion, KB_convertion, B_convertion);
    }
        else //invalid data type
    {                                                 
                printf("Invalid data type\n");
    }
        return 0;

}