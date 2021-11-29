/*As you cross a forest you can't help but admire the nature around you including 
the many species of trees. Despite your interest, you are a very unskilled botanist
and have a lot of trouble identifying different trees. A friend gives you some 
guidance and you decide to write a program that will give you the name of the 
tree based on its characteristics.

There are 4 types of trees:
the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or 
more leaflets

the "Calaelen" is 10 meters high or more and its leaves are composed of 
10 or more leaflets

the "Falarion" is 8 meters high or less and its leaves are composed of 5 or
fewer leaflets

the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or
fewer leaflets

Your program should read the height and the number of leaflets of a given 
tree (both integers), and should be able to determine and display the name of
the corresponding tree.  If the height and number of leaflets does not match any
of the tree type descriptions, your program should display "Uncertain".*/


#include<stdio.h>

int main(void)
{
   
   // variable declaration and definition
   int  tree_height;
   int number_of_leaflets;

   //read the values
   printf("What is the tree height?\n");
   scanf("%d", &tree_height);
   printf("How many leaflets does the tree have?\n");
   scanf("%d", &number_of_leaflets);
   
   //comparition variables definition
   int tinuviel = (tree_height <= 5) && (number_of_leaflets >= 8);
   int calaelen = (tree_height >= 10) && (number_of_leaflets >= 10);
   int falarion = (tree_height <= 8) && (number_of_leaflets <= 5);
   int dorthonion = (tree_height >= 12) && (number_of_leaflets <= 7);

   // nestle if else statements to make the comparitions
    if (tinuviel)
      {
          printf("The tree is the Tinuviel");
      }
    else
      {
          if(calaelen)
          {
              printf("The tree is the Calaelen");
          }
          else
          {
              if(falarion)
              {
                  printf("The tree is the Falarion");
              }
              else
              {
                  if(dorthonion)
                  {
                      printf("The tree is the Dorthonion");
                  }
                  else
                  {
                      printf("The tree is the Uncertain");
                  }
              }
          }
      }
    
   return 0;
}