#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 0.0001

int main(){
double a = 1.0001 ,b = 1.0001,delta;
int i ;
delta = fabs(b-a);
printf("%lf",delta);

for(i = 0 ; i < 50 ; i++){
if( e < delta)
 {
 printf("hello cruel world");
 exit(0);
 }

} 

}
