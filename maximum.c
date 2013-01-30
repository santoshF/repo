#include<stdio.h>
#include<limits.h>
int main(){
if (LLONG_MAX < 600851475143)
 printf("Long is not long enough");
else
 printf("Long is long enoungh it %lld",LLONG_MAX);
return 0;
}
