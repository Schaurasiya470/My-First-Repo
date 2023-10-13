/*
*
**
***
****
*****
or
    *
   **
  ***
 ****
*****
WRITE O CODE FOR PRINT ABOVE LIKE PATTERN....
*/
#include<stdio.h>
void main()
{
int n,i,j,k;
printf("Enter the number of Rows...\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {printf("*");}
printf("\n");}
printf("\n");
printf("\n");


for(i=1;i<=n;i++)
  {
for(j=1;j<=n-i;j++)
  {printf(" ");}
for(k=1;k<=i;k++)
  {printf("*");}
printf("\n");}}
