#include <stdio.h>
#include "sum.h"

int main(){

int a = 0;
int b = 0;
int c= 0;

do{
printf("Value for a");
scanf("%d",&a);
printf("Value for b");
scanf("%d",&b);	
c = sum(a,b);
} while(c>10);

return 0;
}
