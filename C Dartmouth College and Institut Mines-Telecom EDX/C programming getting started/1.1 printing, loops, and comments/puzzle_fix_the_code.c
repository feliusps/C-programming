/*
//basic programs structure
// preprocessor directive
#include <stdio.h>

// main function
int main(void) {
    // variable declarations
    int i = 0;
    
    // executable statements
    for(i = 0; i < 3 ; i++) {
        printf("Blah");
        printf("Bleh");
        printf("Blih "); 
    }
    
    // return statement
    return 0;
}



Please arrange the following program segments in the correct order so that it prints
 "I love love love programming!"
Then use comments to label the pieces of the program 
(preprocessor directive, variable declaration, executable statement,
 return statement, main function).
 
  printf("I ");

    for(i = 0; i < 3 ; i++) {
        printf("love ");
    }

    return(0);

    printf("programming!");

    #include <stdio.h>

}

int main(void){

    int i;
 
  */
// preprocessor directive
 #include <stdio.h>

// main function
 int main(void){
    // variable declarations
    int i;

    printf("I ");
    
    // executable statements
    for(i = 0; i < 3 ; i++) {
        printf("love ");
    }
     printf("programming!");

     // return statement
     return(0);
}