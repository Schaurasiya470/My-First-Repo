/*
    *
   ***
  *****
 *******
*********
WRITE A PROGRAME TO PRINT ABOVE TYPE PATTERN.

*/

#include<stdio.h>
void main()
{
int i,j,k,n;
printf("How many Row you want \nEnter no of Rows......\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=(n-i);j++)
  {  printf(" ");
   }
for(k=1;k<=(2*i)-1;k++)
  { printf("*");
}printf("\n");}}
