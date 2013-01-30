#include<stdio.h>
#include<stdlib.h>
int main(){
int n = 0 ,i,j,rem, ans = 0,count = 0;
for(i = 900; i < 1000;i++)
{
  for(j = 900 ; j <1000; j++ )
 {
  n = i * j;
// printf("%d + %d = %d \n",i,j,n);
 
 ans = palindrome(n);
 
 // printf("%d %d \n",n,ans);
 if(n == ans){
 printf("%d is a Palindrome and it is  found! \n", ans);
 count++;
}
 }
} 

printf("\n Total = %d",count);
return 0;
}

int palindrome(int n){
int rem,rev = 0;
//printf("In Palindrome! to evaluate %d \n",n);
 while( n > 0){
 rem = n % 10;
 rev = rev * 10 + rem;
 n = n /10;
} 
//printf("Reverse number is %d \n",rev);
 return rev;

}
