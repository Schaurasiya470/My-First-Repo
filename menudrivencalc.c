
// WRITE A PROGRAME FOR OPRATES ALL ARITHMATIC OPRATORS CHOOSEN BY AN OPTION..

#include<stdio.h>
void main()
{
float a,b,result;
char ch,A,S,M,D;
printf("Enter a choice...\n");
printf("A-for addition\n");
printf("S-for substraction\n");
printf("M-for multiplication\n");
printf("D-for division\n");
scanf("%c",&ch);
printf("Enter two Numbers..\n");
scanf("%f %f",&a,&b);
switch(ch)
{
case 'A':
result=a+b;
printf("result=%.2f\n",result);
break;
case 'S':
result=a-b;
printf("result=%.2f\n",result);
break;

case 'M':
result =a*b;
printf("result=%.2f\n",result);
break;

case 'D':
result=(float)a/b;

printf("result=%.2f\n",result);
break;

default:
printf("you have choosen invalid choise\n");
}}

