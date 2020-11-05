#include  <stdio.h>

double average(int *vec, int n) {
  int i; // counter variable
  int sum = 0; // sum variable to calculate average
  double average; // average variable

  for (i = 0; i < n; ++i) { // loop to sum all the values in the array
    sum += vec[i];
  }

  average = (double)sum/n; // calculate the average

  return average;
}