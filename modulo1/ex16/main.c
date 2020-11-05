/*
 Using pointer arithmetic, implement a function char* where_exists(char* str1, char*
str2) that receives the address of two strings (str1 and str2) and determines if the first string
exists within the second. The function should return a pointer to the beginning of the first (or
only) occurrence of str1 within str2 or NULL otherwise.
 */

#include "ex16.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *str = "find the potato code";
	char *search = "potato";
	char *result = where_exists(search,str);
	if (result)
        printf("String Input: %s\n Searching: %s\n Found at: %s\n", str, search, result);
	return 0;
}

