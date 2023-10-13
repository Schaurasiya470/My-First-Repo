//WRITE A PROGRAME FOR PRINT EQUATION OF QUADRATIC WHOSE ROOTS ARE GIVEN...


#include<stdio.h>
void main()
{
 float a,b,s,p; //a,b-roots of quadratic eqn s-sum of roots,p-product of roots
 printf("Enter the roots of quadratic equation?\n");
 scanf("%f %f",&a,&b);
 s=a+b;
 p=a*b;
 printf("Quadratic equation formed by roots %.2f and %.2f is ...\n",a,b);
 printf("\nX^2-(%.2f)X+(%.2f) = 0\n",s,p);
}
