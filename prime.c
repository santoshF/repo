#include<stdio.h>
int main(){
long long int n =6001645641,i,j,count;

for(i = 0 ; i < n ; i++){
 count = 0;
 for(j = 2; j < n/2;j++ ){
   if( n%i == 0  ){
     count++;
}
}
}
if(count == 0 && n!= 1)
  printf("%lld \n",n);

return 0;
}
