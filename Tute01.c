/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;
  printf("Enter marks(subject1-)");
  scanf("%d",&mark1);
  printf("Enter marks(subject2-)");
  scanf("%d",&mark2);
  avg=(mark1+mark2)/2;
  printf("%f",avg);
  
  
  return 0;
}

