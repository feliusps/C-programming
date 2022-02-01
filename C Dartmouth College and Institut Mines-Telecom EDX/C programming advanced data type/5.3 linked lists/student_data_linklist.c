/*You would like to store student data (for each student, their name and age)
in a linked list of students. You are given the following structure to store each 
student's information. Please do not modify this structure:

Your first task is to write a function createStudent() that takes as inputs a 
string (namely a student's name) and an integer (their age) and that returns 
a pointer to a struct student which stores this information. Your function 
should dynamically allocate the memory required for this struct student and 
then write the student's name and age into this newly allocated memory. 

You are given the createStudent() function prototype and a main() function to 
test your code, please do not modify these:*/

#include<stdio.h>
#include<stdlib.h>


struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}



// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[50], int studentAge)
{ 
  struct student *ptr;
  int i = 0;
  ptr = (struct student *) malloc(sizeof(struct student));
  while(studentName[i]!= '\0')
  { 
      ptr -> name[i] = studentName[i];
      i = i + 1;
  } 
  ptr -> age = studentAge; 
  ptr -> next = NULL;
  return ptr; 
}