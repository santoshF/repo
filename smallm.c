#include<stdio.h>
int  main(){
int n,i,count;
 for(n = 1; n < 50000; n++ ){
   count = 1; 
    for(i = 1 ; i <= 10 ; i++) {
        if(n%i == 0){
            count++;
         }
    }
}
printf("%d",count);
if(2 == count )
 printf("ok for %d",n);
return 0;
}
