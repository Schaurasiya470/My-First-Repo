/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
WRITE A CODE FOR PRINT ABOVE TYPE PATTERN..
*/
#include<stdio.h>
void main()
{
int n,i,j,k;
printf("Enter Number of Rows.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
for(j=1;j<=n-i;j++)
  {printf(" ");}
for(k=1;k<=(2*i)-1;k++)
{printf("*");}
printf("\n");}

for(i=1;i<=n-1;i++)
   {
   for(j=1;j<=i;j++)
    {printf(" ");}
   
for(k=1;k<=((n-1-i)*2)+1;k++)
   {printf("*");}

printf("\n");
}}