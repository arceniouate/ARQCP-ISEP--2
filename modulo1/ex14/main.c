#include <stdio.h>   
#include "ex14.h" 
     
int main()    
{    
    //Initialize array     
    float  arr[] = {1.5}; ;   

    //Calculate length of array arr    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    	          int freq[n];    

        frequencies(arr,n,freq);
        
        
        return 0;
      

	}
