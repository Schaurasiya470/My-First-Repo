//WRITE A CODE TO CALCULATE ROOTS OF QUADRATIC EQUATION


#include<stdio.h>
#include<math.h>
void main()
{
double a,b,c,D,R1,R2;
printf("Enter coefficients of a Quadratic equation\n");
scanf("%lf%lf%lf",&a,&b,&c);
 D=(b*b)-4*a*c;
 R1=(-b/2*a);
 R2=(sqrt(D)/2*a);

if(D>0)
{
 printf("\nHence roots of the quadratric equation : %.2lf,%.2lf\n",R1+R2,R1-R2);
}
else if(D<0)
{
 R2=(sqrt(-D)/2*a);
 printf("\nHence roots of the quadratric equation : %.2lf + i%.2lf , %.2lf-i%.2lf\n",R1,R2,R1,R2);
}
else
{
 printf("\nHence roots of the quadratric equation : %.2lf,%.2lf\n",R1,R1);
}
}
