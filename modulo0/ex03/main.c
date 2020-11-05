#include <stdio.h>
#include "fill_array.h"
#include "average.h"

int main(void){
	printf("\n");

  int n = 5; // array size
  int vec[n]; // array

  fill_array(vec, n); // fill the array

  printf("Average: %f\n", average(vec, n)); // Show the average of the array values

  printf("\n");
	return 0;
	}
