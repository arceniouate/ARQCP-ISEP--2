#include <stdio.h>
#include  "palindrome.h"
#include "string.h"
int palindrome(char *s) 
{ 
	//int count;
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
		//if(s[i]!=' '){
		//s[count++] = s[i];
		//}else//{
    	if(s[i]==s[n-i-1])
    	c++;
 
 	//}
}
 	if(c==i)
        return 1;
    else
        return 0;
 
 	
	  
 
}

