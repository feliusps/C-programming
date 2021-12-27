/*Write a C-program that converts metric measurements to imperial system values.
Measurements are provided to your program in meters, grams or degrees Celsius 
and must be converted to feet, pounds and degrees Fahrenheit, respectively.
Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
On the first input line you are given the number of conversions to be made.
Each of the following lines contains a value to be converted as well as its 
unit: m, g or c (for meters, grams or degrees Celsius).
There will be a space between the number and the unit. 
You should print your output value for each input line immediately 
after calculating it (ie, you do not have to wait until you have read all inputs).
Display the converted values with 6 decimal places, followed by a space 
and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit).
Each conversion result should be printed on its own line, and you should store
and display all decimal values as doubles.*/

#include<stdio.h>

//function prototype
    double meter_to_feet(double meters);
    double grams_to_pounds(double grams);
    double celcius_to_farenheit(double celcius);

int main(void)
{
    //variables
    int value_number;
    double conv_to_feet;
    double conv_to_pounds; 
    double celcius, conv_to_farenheit; 
    int i;
    double value = 0;
    char letter = '\0';

    //calculations
    printf("Write the number of conversion to be made\n");
    scanf("%d", &value_number);
    //for loop to get the values
    for(i = 0; i < value_number; i++)
    {
        printf("Please write the value and unit type\n");
        scanf("%lf %c", &value, &letter); 
        if(letter == 'm')
        {
           
           conv_to_feet = meter_to_feet(value);
           printf("%.6lf ft\n", conv_to_feet);
           
        }
        else if(letter == 'g')
            {
               conv_to_pounds = grams_to_pounds(value);
               printf("%.6f lbs\n", conv_to_pounds);
               
            }
        else
            {
                if (letter == 'c')
                {
                   conv_to_farenheit = celcius_to_farenheit(value);
                    printf("%.6f f\n", conv_to_farenheit);
                }
            }
    }

return 0;    

}

double meter_to_feet(double meters)
{
    double feet;
    feet = meters * 3.2808;
    return feet;
   
}

double grams_to_pounds(double grams)
{
    
    double pounds;
    pounds = grams * 0.002205;
    return pounds;
}

double celcius_to_farenheit(double celcius)
{
    double farenheit;
    farenheit = 32 + 1.8 * celcius;
    return farenheit;
    
}