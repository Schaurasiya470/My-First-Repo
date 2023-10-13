//WRITE A CODE TO CALCULATE ADDITION OF TWO NUMBERS

#include<stdio.h>
void main(void)
{
int add(int,int);
int a,b,s;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
s=add(a,b);
printf("%d + %d = %d\n",a,b,s);
}
int add(int x,int y)
{
int c;
c=x+y;
return c;
}
