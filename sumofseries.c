//WRITE A CODE FOR CALCULATE SUM OF SERIES..
//1!+2!+3!+......+n!

#include<stdio.h>
void main()
{
int n,i,j,fact=1,sum=0;
printf("1!+2!+3!+......+n!\n");
printf("Enter value of n ->");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
fact*=j;
}
sum+=fact;
fact=1;
}
printf("Sum of the series [1!+2!+3!+......+%d!] is equal to %d \n",n,sum);
}
