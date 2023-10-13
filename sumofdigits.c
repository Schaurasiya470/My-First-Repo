//WRITE A CODE  TO CALCULATE SUM OF DIGITS OF A NUMBER...

#include<stdio.h>
void main()
{
int n,s,r,sum=0;
printf("Enter a number..\n");
scanf("%d",&n);
s=n;
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
n=s;
printf("Sum of the digits of %d is equal to %d \n",n,sum);
}
