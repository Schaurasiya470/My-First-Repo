//write a program to calculate Area and circumference of a Circle
#include<stdio.h>
void main()
{
float pi=(float)22/7,radius,Area,Circumference;
printf("Enter Radius of circle\n");
scanf("%f",&radius);
Circumference=2*pi*radius;
Area=pi*radius*radius;
printf("Area of circle=%f\n",Area);
printf("Circumference of circle=%f\n",Circumference);
}
