#include <math.h>

void power_ref(int *x, int y) {
  *x = (int)pow((double)*x, (double)y);
}