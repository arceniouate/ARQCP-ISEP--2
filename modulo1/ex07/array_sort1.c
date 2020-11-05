#include  "array_sort1.h"
#include <stdio.h>

void array_sort1(int *vec,int n){
	int i; int j;
	for ( i = 0; i < n; i++)                    
	{
		for ( j = 0; j < n; j++)            
		{
			if (vec[j] > vec[i])               
			{
				int tmp = vec[i];         
				vec[i] = vec[j];            
				vec[j] = tmp;             
			}  
		}
	}
	for (i = 0; i < n; i++)                     
	{
		printf(" %d ", vec[i]);
	}
	
}
