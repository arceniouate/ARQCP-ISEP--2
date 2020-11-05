#include <stdio.h>

void printvect(int* v1, int* v2, int size){
    int i=0;
    for(;i<5;i++){
        printf("v1[%d]:%d\n",i,*((v1)+i));
    }
    for(i=0;i<5;i++){
        printf("v2[%d]:%d\n",i,*((v2)+i));
    }

}
