
#include <stdio.h>
#include "ex17.h"
#include "print.c"
int main(void){

    int vc1[] = {1,2,3,4,5};
    int vc2[] = {5,4,3,2,1};
    
   int n = sizeof(vc1)/sizeof(vc1[0]);
   int m= sizeof(vc2)/sizeof(vc2[0]);
    printvect(vc1,vc2,n);
    swap(vc1,vc2,m);

    return 0;
}
