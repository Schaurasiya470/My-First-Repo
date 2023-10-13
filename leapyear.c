// WRITE A PROGRAME TO CHECK LEAP YEAR..
#include<stdio.h>
void main()
{
int year;
printf("Enter a year..\n");
scanf("%d",&year);
if(((year%4==0)&&(year%100!=0))||(year%400==0))
printf("LEAP YEAR\n");
else
printf("NOT A LEAP YEAR\n");
}
