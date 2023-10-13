/*
0
10
101
0101
01010
WRITE A PROGRAM FOR PRINT ABOVE LIKE PATTERN....

*/
#include<stdio.h>
void main()
{
int n,i,j,k=0;
printf("Enter no of Rows...\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
for(j=1;j<=i;j++)
 {
printf("%d",k);
if(k==0)
k=1;
else
k=0;
}

printf("\n");}}
