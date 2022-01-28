/*In this problem you will continue developing the data feature which you started 
implementing in the previous problem. You will implement a "tomorrow" feature in
the C programming language via a function called "advanceDay()". 
The function advanceDay() should take as input a date (stored in a struct date)
and return the date of the following day. You do not have to take into account 
leap years (although you may if you wish to). That is, it is okay for your 
function to always return March 1 as the day following February 28, no 
matter the year.

You are provided with a familiar date structure definition, a main function 
as well as the function prototypes for the readDate(), printDate(), 
and advanceDate() functions. Do not modify any of the given code. 
Simply add your function definitions underneath the main() function. 
For the readDate() and printDate() functions you may simply copy and 
paste the code you developed in the previous task.*/


#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */

void readDate(struct date *ptrDate)
{
   //printf("Enter year month and day \n");
   scanf("%d %d %d", &(*ptrDate).year, &(*ptrDate).month, &(*ptrDate).day);
   
}

void printDate(struct date Date)
{
    printf("%02d/%02d/%4d\n", Date.month, Date.day, Date.year);
	
}

struct date advanceDay(struct date Date)
{
    struct date tomorrowDate;
    tomorrowDate.day = Date.day + 1;
    tomorrowDate.year = Date.year;
    tomorrowDate.month = Date.month;
    
    //months to increase by 1
    
    if(tomorrowDate.day > 31 || (tomorrowDate.day > 30 && (tomorrowDate.month == 4 || tomorrowDate.month == 6 || tomorrowDate.month == 9 || tomorrowDate.month == 11)) ||(tomorrowDate.day > 28 && tomorrowDate.month == 2))
    {
        tomorrowDate.day = 1;
        tomorrowDate.month = Date.month + 1;
    }
    //month greater than 12 increase year make month = 1
    if(tomorrowDate.month > 12)
    {
        tomorrowDate.month = 1;
        tomorrowDate.year = Date.year + 1;
    }
    
    
 return tomorrowDate;

}