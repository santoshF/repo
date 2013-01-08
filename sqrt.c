/****************************************
 Name:Santosh Fernandes
 Date:5/1/2013
 Aim : Find the square root by using newton raphson method
   
 Formulae :x[i+1] = [x[i] + [R/x[i]]]/2
****************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
#define MAX_ITER 50
#define tol 0.00001
int main(){
int i=0;
double x[MAX],x1,x2,initial,delta ,cond, root;

printf("Enter the number to find square root: \n");
scanf("%lf",&root);
x[0] = 0;
x[1] = root / 2;
//delta  =  root/initial; 
//x[0] = (initial + delta) / 2; 
//for(i = 0 ; i < MAX_ITER ; i++) {
//cond = x[i] -x[i+1];
//printf()
//while ( ( cond ) <  tol ) {
 
 printf("\n %d  \t %lf  \n",i,x[i+1]); 
  for(i = 1 ; i < MAX_ITER ; i++) {
 x1 =  x[i];
// printf("\n %d  \t %lf  \n",i,x[i+1]); 
x2 = x[i-1];
cond = x2 - x1;
   // printf("\nx[%d] = %lf  x[%d+1] %lf ",i,x[i],i,x[i+1]);
//  printf("The condition %lf",cond);
 // printf("check condition value %lf",cond);
 if(fabs(cond) > tol  ) {
  delta  =  root/x[i]; 
  x[i+1] = (x[i] + delta) / 2;
 printf("\n %d  \t %lf  \n",i,x[i+1]); 
}else {
 exit(0);
}
}
return 0;
}
