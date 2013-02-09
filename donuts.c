#include<stdio.h>

int main(){
int i,m  ;
for(i = 30 ; i <= 40 ; i++){
  m = i * 5;
   printf(" %d \t %d \n",m,m+i);
  if(m + i == 200 )
   printf(" %d",i);
}
return 0;
}
