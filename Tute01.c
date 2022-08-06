/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2;
  float Total,Average;

  printf("Enter the mark of Subject 1:");
  scanf("%f",&mark1);
  printf("Enter the mark of Subject 2:");
  scanf("%f",&mark2);

  //Calculate total and Average
  Total = mark1 + mark2;
  Average = Total / 2.0;

  printf("\n\nAverage:%.2f",Average);
  
  return 0;
}

