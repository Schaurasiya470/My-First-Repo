//WRITE A CODE  TO PRINT ARMSTRONG NUMBER B/W 100 TO 500..

#include<stdio.h>
void main()
{
int r,i,sum=0,num;
for(i=1;i<=500;i++)
{
num=i;
while(i>0)
{
r=i%10;
sum+=(r*r*r);
i=i/10;
}
i=num;
if(sum==i)
printf("%4d\n ",i);
sum=0;
}
}
