#include <stdio.h>
//char upper1(char *s){
void upper2(char *s){
	int i;
	 for (i = 0; *(s+i)!='\0'; i++) {
      if(*(s+i) >= 'a' && *(s+i) <= 'z') {
         *(s+i) = *(s+i) - 32;
      }
      
  }
	

	  
}
