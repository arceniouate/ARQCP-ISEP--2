#include  <stdio.h>

int fractional_part(char *str) {
  int i = 0; // counter variable
  int retValue = 0;

  while (str[i] != 0) { // loop through string
    if (str[i] != 46) { // check for fractional point and increment the counter
      ++i;
    } else {
      ++i;
      break; // break the loop when it reaches fractional point
    }
  }

  while (str[i] != 0) { // loop through remainder of string
    if (str[i] < 48 || str[i] > 57) return -99; // check for invalid characters
    retValue = retValue * 10 + (str[i] - '0'); // get fractional part value
    ++i; // increment counter
  }

  return retValue;
}