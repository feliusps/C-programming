//exercise passing variables to function by reference

#include <stdio.h>
 
void swap (char *x, char *y); 

int main(void) {
    char c = 'P';
    char d = 'T';
    printf("%c%c \n", c, d);
    swap(&c, &d);
    printf("%c%c\n", c, d);
    return 0;
}

void swap (char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}