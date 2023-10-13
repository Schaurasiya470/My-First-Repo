//WRITE A CODE FOR PRINT ALL PRIME NUMBERS UPTO 'N' ...

#include<stdio.h>
void main()
{
int n,r,i,j,k,factor;
printf("Enter a Limit \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
factor=0;
 for(j=1;j<=i;j++)
  {
 if(i%j==0)
factor=factor+1;
}
if(factor==2)
printf("%d\n",i);
}}
