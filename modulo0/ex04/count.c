#include <stdio.h>

int count(int *vec, int n, int value){
	int count=0;
	int j=0;
for(j=0; j<n; j++){ 
	if(vec[j] == value){
		count++;
	}
	}
	return count;
}
