#include <stdio.h>

// fancy print of an array
void print_array(int *vec, char label[], int n) {
  int i;
  printf("Values of %s: [", label);
  for (i = 0; i < n; ++i) {
    if (i != 0) printf(", ");
    printf("%d", *(vec + i));
  }
  printf("]\n");
}
