
//correct simple errors in loops with missing braces
#include<stdio.h>
int main(void) {

    int i;

    printf("+");     //print left top corner
    for (i = 0; i < 23; i++)
        {                    //missing bracket in for loop
        printf("-");
        }
    printf("+\n");        //print right top corner

    for (i = 0; i < 3; i++)
        {                      //missing bracket in for loop
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
        }
    printf("+"); //print left bottom corner
    for (i = 0; i < 23; i++)
        {                         //missing bracket in for loop
        printf("-");
        }
    printf("+");        //print right bottom corner

    return(0);
}