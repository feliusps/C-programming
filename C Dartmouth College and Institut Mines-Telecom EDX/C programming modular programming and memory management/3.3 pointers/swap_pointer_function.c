/*Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and 
the second to last integer, the third and the third to last integer.
The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers. 
The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, 
passing the array as an argument.
The main function then prints the reversed array.

*/


#include <stdio.h>

void swap (int * ptr);

int main(void)
{
   
    int arr[6] = {0};
   
    
    printf("Enter 6 integers for the array \n");
    scanf(" %d %d %d %d %d %d" , &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
    //call swap function    
    swap (arr);
    printf("%d %d %d %d %d %d\n" , arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    return 0;
 }

//funcion
void swap (int * ptr )
{
    
    int temp1 = * ptr;
    *ptr  = *(ptr + 5);
    *(ptr + 5) = temp1;
    
    
    int temp2 = *(ptr + 1); 
    *(ptr + 1) = *(ptr + 4);
    *(ptr + 4) = temp2;

    int temp3 = *(ptr + 3);
    *(ptr + 3) = *(ptr +2);
    *(ptr + 2) = temp3;

}