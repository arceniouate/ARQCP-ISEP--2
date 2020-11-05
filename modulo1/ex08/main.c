#include <stdio.h>
#include "array_sort2.h"
int  main(void){
	int n;
    int vc[]={1,44,4,5,7,6};
    // sacar o tamanho do array
        n = sizeof(vc)/sizeof(vc[0]);
    array_sort2(vc,n);
    
    return 0;
}
