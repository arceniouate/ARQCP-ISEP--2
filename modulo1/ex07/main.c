#include <stdio.h>
#include "array_sort1.h"


int main(void){
	int vc[] = {1, 2, 3, 4, 99,6, 7, 8, 9, 10};
	 int n;
  // sacar o tamanho do array
        n = sizeof(vc)/sizeof(vc[0]);

     array_sort1(vc,n);
	return 0;
}
