//WRITE A PROGRAME TO CALCULATE 'HCF' OF 2 NUMBERS

#include<stdio.h>
void main()
{
int a,b,min,i,hcf;
printf("Enter two numbers...\n");
scanf("%d%d",&a,&b);
min=(a<b)?a:b;
for(i=1;i<=min;i++)
{
if((a%i==0)&&(b%i==0))
hcf=i;
}
printf("HCf of %d and %d = %d\n",a,b,hcf);
}
