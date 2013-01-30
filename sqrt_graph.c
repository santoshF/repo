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
void graph(char*);
void squareRoot(double);
 
long long int MAX_ITER;

int main(int argc,char * argv[]){
FILE *fp;
char *filename;
int i;
long double r = 123456789012345678;
long long int MAX_ITER = 1000;
if(argc != 2){
printf("ErroR...");
}
else{
filename = argv[1];
fp = fopen(filename,"w");
MAX_ITER *= 100;
time_t t1,t2;
t1 = (double) time(NULL);
for(i=0;i <MAX_ITER || MAX_ITER < 1000000;i++){
squareRoot(r);//Call Function 
}
t2 = (double) time(NULL);

printf("\nThe Total time = %f  \n",difftime(t2,t1));
fprintf(fp,"%Ld  %f",MAX_ITER,difftime(t2,t1));
graph(filename);
}
return 0;
}
void squareRoot(double root){
int i=0;
double x[MAX],x1,x2,initial,delta ,cond;

x[0] = 0;
x[1] = root / 2;

  for(i = 1 ; i < MAX_ITER ; i++) {
 x1 =  x[i];

x2 = x[i-1];
cond = x2 - x1;

 if(fabs(cond) > tol  ) {
  delta  =  root/x[i]; 
  x[i+1] = (x[i] + delta) / 2;

}else {
 break;
}
}
}
void graph(char *file){

char * cmd[] = {"set title \"Graph \"","set xlabel \" Time \" ","set ylabel \" Number of times program run \""};
FILE * temp = fopen("file","r");
FILE * gnuPlot= popen("gnuplot -persistent","w");
int i;
for(i=0;i<3;i++)
 {
  fprintf(gnuPlot,"%s \n",cmd[i]);
}
fprintf(gnuPlot,"plot '%s' using 2:4 w l \n",file);

exit(0);
}     

