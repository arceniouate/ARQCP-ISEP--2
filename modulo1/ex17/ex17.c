#include <stdio.h>

void swap(int* vec1, int* vec2, int size){
    int tmpvalue=0;
    size--;//allign with index access
    while(size>=0){
        tmpvalue=*((vec1)+size);//saved vec1 value
        *((vec1)+size)=*((vec2)+size);
        *((vec2)+size)=tmpvalue;
        size--;
    }
}
    
