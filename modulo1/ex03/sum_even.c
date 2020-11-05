#include  <stdio.h>
int sum_even(int *p,int num){
int sum=0;
int i;
for( i=0;i<num;i++){
   if( p[i] % 2==0){
     sum+=p[i];
    }

} return sum;
}
