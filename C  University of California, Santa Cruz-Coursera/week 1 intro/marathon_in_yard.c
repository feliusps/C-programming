/* Distance of a marathon in yards ABC page 11 variation 09 16, 2016*/

#include<stdio.h>

int main(void)
{
    // variable declaretion
    int kilometers = 42, meters = 195;
    double yards, miles;

    //formula to solve the problem
    yards = 1093.61 * (kilometers + meters / 1000.0);

    printf("\nA marathon is %lf yards.\n", yards );
    return 0;
}
