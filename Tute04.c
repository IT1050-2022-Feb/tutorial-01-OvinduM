/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int max(int no1, int no2);
int min(int no1, int no2);
int multiply(int no1, int no2);




int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//Find maximum between two numbers
int max(int n01, int n02)
{
    return (n01 > n02 ) ? no1 : no2;
}
 //Find minimum between two numbers.
int min(int no1, int no2) 
{
    return (no1 > no2 ) ? no2 : no1;
}
 //Find mutiplcation between two numbers.
int min(int no1, int no2) 
{
  int result;
    result=n01*no2;
    return result;
}