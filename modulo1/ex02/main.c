#include <stdio.h>
#include <stdlib.h>
#include "copy_vec.h"
#include "print_array.h"

int main(void) {
  printf("\n");

  int n = 2; // array size
  int vec1[n];
  int vec2[n];
  int i;

  // assign random values to vec positions
  for (i = 0; i < n; ++i) {
    vec1[i] = rand() % 100;
    vec2[i] = rand() % 100;
  }

  printf("Value of n: %d\n", n);

  print_array(vec1, "vec1", n);
  print_array(vec2, "vec2", n);

  printf("\nCopying.....\n\n");
  copy_vec(&vec1[0], &vec2[0], n); // copy vec1 into vec2

  print_array(vec1, "vec1", n);
  print_array(vec2, "vec2", n);

  printf("\n");
  return 0;
}
