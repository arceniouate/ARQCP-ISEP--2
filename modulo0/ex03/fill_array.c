#include  <stdio.h>

void fill_array(int *vec, int n) {
  int i; // counter variable

  for (i = 0; i < n; ++i) { // loop to fill the array
    printf("Insert a number: ");
    scanf("%d", &vec[i]); // ask the user for a value and send it to the array position of i
    printf("\n");
  }
}