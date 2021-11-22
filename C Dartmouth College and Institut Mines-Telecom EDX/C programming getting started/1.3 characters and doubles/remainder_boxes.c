/*You have a number of loose matches that you would like to put back into boxes. 
Write a program that calculates and displays how many full boxes you will have 
and how many leftover matches you will have after filling all the boxes you can. 
Your program should take as input the number of matches to be boxed up followed 
by the size of a each box. Next it should print out the number of full boxes 
followed by the number of remaining  matches.*/


#include <stdio.h>
int main(void)
 {
    // pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
    int number_of_matches;
    int size_of_a_each_box;
    int boxes_quantity;
    int matches_remain;

    // input data
    printf("Input the number of matches\n");
    scanf("%d", &number_of_matches  );

    printf("Input the size of each box\n");
    scanf("%d", &size_of_a_each_box  );
    //calculation with remainder
    boxes_quantity = number_of_matches / size_of_a_each_box;
    matches_remain = number_of_matches % size_of_a_each_box;

    //output data
    printf("I will need %d boxes\n", boxes_quantity);
    printf("I will have %d remaining matches\n", matches_remain);
    return 0;
}