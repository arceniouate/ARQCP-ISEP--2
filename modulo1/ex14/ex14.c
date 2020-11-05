#include <stdio.h>    

void frequencies(float  *grades, int n,int *freq){
	int visited = -1;
	  int i,j;

        
    for( i = 0; i < n; i++){    
        int count = 1;    
        for( j = i+1; j < n; j++){    
            if(*(grades+i) == *(grades+j)){    
                count++;    
                //To avoid counting same element again    
                *(freq+j)= visited;    
            }    
        }    
        if(*(freq+i)!= visited)    
            *(freq+i) = count;    
    }   
    //Displays the frequency of each element present in array    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for( i = 0; i <n; i++){    
        if(*(freq +i) != visited){    
            printf("    %f", *(grades +i));    
            printf("    |  ");    
           printf("  %d\n", *(freq +i));    
        }    
    } 
        printf("---------------------\n");    

	   

	
}
