//Secant  method
#include <stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x -4*x +1
int main(void) {
 int i=0;
 float x0,x1,x2;
 float f0,f1,f2;

 printf("Enter the value of x0 and x1\n");
 scanf("%f%f",&x0,&x1);
 do{
     f0=f(x0);
     f1=f(x1);
     x2=((x0*f1)-(x1*f0))/(f1-f0);
     f2= f(x2);
     f0=f1;
     f1=f2;
     x0=x1;
     x1=x2;
     i++;
     printf("Number of iteration %d\t",i);
     printf("Root of is=%f\t",x2);
     printf("Value of fun=%f\n",f2);
}while(fabs(x0-x1)>e);
	getch();
}
