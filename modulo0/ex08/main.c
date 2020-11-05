#include <stdio.h>
#include "integer_part.h"
#include "fractional_part.h"

int main(void) {
  printf("\n");

  char x[] = "123.456";

  int x_int = integer_part(x);
  int x_frac = fractional_part(x);

  printf("String: %s\n", x);
  printf("Integer part: %d\n", x_int);
  printf("Fractional part: %d\n", x_frac);

  printf("\n");
  return 0;
}
