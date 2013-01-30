#include<stdio.h>

int main(){
long long int num ,i,count,n=600851475143;
for(num =1 ; num <= n;num++ ){
count = 0;
for(i=2;i <= num/2;i++){
 if(num%i == 0){
 count++;
 break;
}
}

if(count == 0 && num != 1 ){
 if(n%num==0)
  printf("%lld \n",num);
}
}
return 0;
}
