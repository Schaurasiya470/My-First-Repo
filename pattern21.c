/*
54321
4321
321
21
1
WRITE A PROGRAME FOR PRINT ABOVE LIKE PATTERN...
*/
#include<stdio.h>
void main()
{
int n,i,j,k;
printf("Enter number of Rows...\n");
scanf("%d",&n);
k=n;
for(i=1;i<=n;i++)
{
for(j=k;j>=1;j--)
  {printf("%d",j); 
}
k=k-1;

printf("\n");}}
