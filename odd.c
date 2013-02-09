#include<stdio.h>

int main(){
int oddSum = 0,i;
for(i = 1 ; i <= 41 ; i++)
{ 
  if(i%2 != 0)
     oddSum += i;
}
printf("%d ",oddSum);
return 0;
}
