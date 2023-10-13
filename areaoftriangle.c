//write a program to calculate Area and Perimeter of a triangle
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,A,S;//A=area of tringle,S=semi-perimeter of trangle
printf("Enter sides of triangle\n");
scanf("%f %f %f",&a,&b,&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
printf("AREA and Perimeter of Triangle = %f,%f\n",A,2*S);

}
