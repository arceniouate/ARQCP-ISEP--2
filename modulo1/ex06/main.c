#include <stdio.h>
#include <stdlib.h>
#include "power_ref.h"

int main(void) {
  printf("\n");

  int x = rand() % 10; // assign random value up to 10
  int y = rand() % 10;
  int *px = &x; // pointer to address of x

  printf("Value of x: %d\n", x);
  printf("Value of y: %d\n", y);
  power_ref(px, y);
  printf("Value of x^y: %d\n", x);

  printf("\n");
  return 0;
}
