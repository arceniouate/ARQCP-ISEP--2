#include <stdio.h>
#include "sum_even.h"


int main(void){
    int vc[] = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
       int n;

        n = sizeof(vc)/sizeof(vc[0]);

     int res=sum_even(vc,n);
printf ("SUM EVEN  : %d\n",res);

	return 0;
}
