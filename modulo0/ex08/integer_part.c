#include  <stdio.h>

int integer_part(char *str) {
  int i = 0; // counter variable
  int retValue = 0;

  while (str[i] != 0) { // loop through string
    if (str[i] == 46) break; // check for fractional point and break loop
    if (str[i] < 48 || str[i] > 57) return -99; // check for invalid characters
    retValue = retValue * 10 + (str[i] - '0'); // get the integer part value
    ++i; // increment counter
  }

  return retValue;
}