//WRITE A CODE  TO CHECK ARMSTRONG NUMBER...

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
sum=sum+(r*r*r);
n=n/10;
}
if(sum==s)
printf("Armstrong Number\n");
else 
printf("Not Armstrong Number\n");
}
