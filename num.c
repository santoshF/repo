#include<stdio.h>
#include<stdlib.h>
int main(){
long long int num ,i,count, n=2000001,loop = 0,sum = 0;
for(num =1 ; num <= n;num++ ){
count = 0;
for(i=2;i <= num/2;i++){
 if(num%i == 0){
 count++;
 break;
 }
}

//while(loop < 10001){
if(count == 0 && num != 1  ){
 if(num < 2000000  ) {
  sum = sum + num;
  printf("%lld \n",sum);
}

 else {
 exit(0);
 }
}
//if(loop == 2000000)
// exit(0);
//printf("%lld\n",loop);
}

return 0;
}
