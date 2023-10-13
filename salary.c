//write a program for calculate  the net salary of an Employee given Basic salary.

#include<stdio.h>
void main()
{
 int BS;
 float DA,HRA,GS,NS;
 printf("Please Enter the basic salary of an Employee ->");
 scanf("%d",&BS);
 DA=(25*BS)/100;
 HRA=(15*BS)/100;
 GS=BS+DA+HRA;
 NS=GS-(10*GS)/100;
 printf("Net salary of that Employee = %f\n",NS);
}
