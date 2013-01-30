#include<stdio.h>
int main(){
int num = 1000;
int i ;
int sum = 0;
//FILE *fp;
//fp = fopen("test.txt","w");
for( i=3 ; i <num;i++){
if(i%3==0 || i%5 ==0 ){
//fprintf(fp,"%d \n",i);
sum = sum + i;
//printf("%d \t",sum);
}
//fclose(fp);
//printf("%d \t",sum);
} 

printf("%d \t",sum);

return 0;
}
