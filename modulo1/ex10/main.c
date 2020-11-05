#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "print_array.h"
#include "odd_sum.h"

int main(void) {
  printf("\n");

  srand(time(NULL)); // seed rand() function with the time so the numbers are more randomized

  int p[6] = {5}; // array with first element indicating array size
  int i;

  // assign random values to src
  for (i = 1; i < (*p + 1); ++i) {
    *(p + i) = rand() % 100;
  }

  printf("Size of the array: %d\n", *p);
  print_array(p, "p", *p + 1);

  printf("\n");

  printf("Sum of odd elements in array: %d\n", odd_sum(p));

  printf("\n");
  return 0;
}
