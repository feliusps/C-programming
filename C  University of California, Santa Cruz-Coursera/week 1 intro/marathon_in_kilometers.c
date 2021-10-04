
//the distance of a marathon in kilometer by sammy Coder April 18, 2018
#include<stdio.h> 

int main(void)
{
   //variable declaration
   int miles = 26, yard = 385;
   double kilometers;

   // problem formula
   kilometers = 1.609  * (miles + yard/1760.0);
   printf("\n maraton is %lf kilometer.\n\n", kilometers);
   return 0;


}