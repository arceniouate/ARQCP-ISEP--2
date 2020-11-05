#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "print_array.h"
#include "sort_without_reps.h"

int main(void) {
  printf("\n");

  srand(time(NULL)); // seed rand() function with the time so the numbers are more randomized

  int n = 8; // array size
  int src[n]; // source array
  int srcDuplicates[] = {10, 10, 25, 15, 30, 12, 12, 25}; // source array with duplicates
  int dest[n]; // destination array
  int numCopied; // number of elements copied from source to destination (no duplicates)
  int i;

  // assign random values to src
  for (i = 0; i < n; ++i) {
    src[i] = rand() % 100;
  }

  printf("Array size: %d\n", n);
  print_array(src, "src", n);
  print_array(srcDuplicates, "srcWithDuplicates", n);

  printf("\n");

  numCopied = sort_without_reps(src, n, dest);
  printf("Number of elements passed to second array: %d\n", numCopied);
  printf("Src array in ascending order without duplications:\n");
  print_array(dest, "dest", numCopied);

  printf("\n");

  numCopied = sort_without_reps(srcDuplicates, n, dest);
  printf("Number of elements passed to second array: %d\n", numCopied);
  printf("Src array with duplicates in ascending order without duplications:\n");
  print_array(dest, "dest", numCopied);

  printf("\n");
  return 0;
}
