//To find the max root of a equation by newton raphson method
#include<stdio.h>
#include<math.h>
#define MAX 100
#define e 0.0001
double  f(double  x )
 {
 return pow(x,6)-(16*4);
}
double fd(double x) {
 return  6*pow(x,5);
}
int main(){
int i;
double x[MAX],x1,x2,initial,delta;

initial  = 3.0;
x1 =  f(initial);
printf("%lf", x1);
x2 = fd(initial);
//x[1]  = x1 /x2;
printf("\n%lf\n",x2);
delta =  x1 /x2;
x[0] = initial - delta;
printf("%lf",x[0]);

for( i = 0 ;i < 50 ; i++){
do 
{
x[i+1] = x[i] - (f(x[i])/fd(x[i]));
printf("%lf\n",x[i]);
}while((x[i+1] - x[i]) >  e );
}
return 0;
}


