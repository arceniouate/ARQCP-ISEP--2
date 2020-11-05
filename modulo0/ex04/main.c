#include <stdio.h>
#include "count.h"

int main(void){
int n=0;
int i=0;
printf("Number of elements in the array: \n");
scanf("%d", &n);

int vec[n];

printf("Fill the array with elements: \n");

for(i=0; i<n; i++){ 
	int aux=0;
	printf("Value: \n");
	scanf("%d", &aux);
	vec[i] = aux;	
	}
	
int value=0;
printf("Insert value to be counted: \n");
scanf("%d",&value);

int ntimes=0;
ntimes=count(vec,n,value);	
printf("Number of times value appears in array: %d \n", ntimes);
	
return 0;
}
