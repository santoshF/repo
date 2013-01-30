/****************************************
 Name:Santosh Fernandes
 Date:8/1/2013
 Aim : Find the square root by using newton raphson method
     also  find the largest number it works ...
     and also note down the time it takes each number ,,,,
     c supports up to 18 digits number ,,,,,
     up to 18 digits number
     make a table of the times and also u can plot it using gnuplot
 Formulae :x[i+1] = [x[i] + [R/x[i]]]/2
****************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
// MAX_ITER 100000
#define tol 0.00001

void squareRoot(double);
 
long long int MAX_ITER;

int main(int argc,char * argv[]){

int i;
long double r = 123456789012345678;
long long int MAX_ITER;
if(argc != 2){
printf("ErroR...");
}
else{
MAX_ITER = atoi(argv[1]);
//r = MAX_ITER;
time_t t1,t2;
t1 = (double) time(NULL);
for(i=0;i <MAX_ITER;i++){
squareRoot(r);//Call Function
r--;
}
t2 = (double) time(NULL);
printf("\nThe Total time = %f  \n",difftime(t2,t1));
}
return 0;
}

void squareRoot(double root){
int i=0;
double x[MAX],x1,x2,initial,delta ,cond;

x[0] = 0; //Initialize 0 th position as x -1 for x[1] is 0
x[1] = root / 2; // initial root given root by 2

  for(i = 1 ; i < MAX_ITER ; i++) {
 x1 =  x[i];//assign x1 to x[1]

x2 = x[i-1]; //assign x2 to x[0]
cond = x2 - x1;//check for tol.

 if(fabs(cond) > tol  ) {
  delta  =  root/x[i]; 
  x[i+1] = (x[i] + delta) / 2;

}else {
 break;//if greater than tolerance
}
printf("Root is ",x[i+1]);
}

}


