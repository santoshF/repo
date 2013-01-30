#include<stdio.h>
unsigned int fibo(unsigned int n){
return n > 2 ?  fibo( n - 1) + fibo( n - 2): n;
}

int main(){
 unsigned int n,i,sum = 0;
 for(i = 1; i < 35 ; i++ ){
  while(fibo(i) < 4000000 ){
 if(fibo(i) % 2 == 0 ) 
  sum += fibo(i);
//    printf("%u \t", fibo(i));
  i++;
 }
// printf("%u",sum);
}

 printf("%u",sum);
return 0;
}
