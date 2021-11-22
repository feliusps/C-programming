/*You are rolling a red, a yellow and a green standard dice 
(whose sides each have the numbers 1-6 on them) and combine them to a 3-digit number
by using the red value as the ones place, the yellow value as the tens place and 
the green value as the hundreds place. For example, if you rolled a 3 with red,
a 5 with yellow and 2 with green then the combined 3-digit number would be 253.
You repeat this process and your job is to continuously find the average of all 
of those 3-digit numbers. More precisely, you need to first read an integer
that tells you how many 3-digit numbers you'll be averaging. Next, you need
to read the red value, then the yellow value, then the green value of the first 
throw and print out the corresponding 3-digit number as well as the current 
average with one decimal place. Then you repeat this process for the given number 
of rounds. Here is a sample run:
*/

#include <stdio.h>
int main(void)
{
//variable declaration and definition
int how_many_numbers_average;
int red_value;
int yellow_value;
int green_value;
int convertion;
int addition = 0;
double average;
int i;

//number of digits to find
printf("input the number of digit to average\n");
scanf("%d", &how_many_numbers_average);

//printf("you rolled: %d%d%d, current average: 253.0",red_value, yellow_value, green_value);


//create a for loop to read each value
for (i = 0; i < how_many_numbers_average; i++ ) 
     
     {
        printf("Read the three digit one for each dice\n");
        scanf("%d %d %d", &red_value, &yellow_value, &green_value);
        //add the digit ones , tens, hundreds places
        convertion =  ((red_value*1) + (yellow_value*10) + (green_value*100));
        addition = addition + convertion;
        //calculate the average
        average = (double) addition / (i + 1);

       printf("%d. you rolled: %d, current average: %.1lf\n", (i + 1),convertion, average);


     }

return 0;
}