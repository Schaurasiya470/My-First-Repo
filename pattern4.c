/*
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
   for(j=1;j<=i-1;j++)
    {printf(" ");}
   
for(k=1;k<=((n-i)*2)+1;k++)
   {printf("*");}

printf("\n");
}}
