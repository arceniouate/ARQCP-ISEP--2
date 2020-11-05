// Sum odd elements in array (exclude first one that indicates array size)
int odd_sum(int *p) {
  int sum = 0;
  int i;

  for (i = 1; i < (*p + 1); ++i) { // loop through array
    if (*(p + i) % 2 != 0) {
      sum += *(p + i);
    }
  }

  return sum;
}