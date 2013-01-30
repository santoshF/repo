#include<stdio.h>
unsigned int fib(unsigned int n){
return n < 2 ? n:fib(n-1)+fib(n-2);
}
int main(){
unsigned int n;
for(n = 0; n < 35 ; n ++)printf("%u \t", fib(n));
}
