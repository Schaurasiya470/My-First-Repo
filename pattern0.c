/*
******
******
******
******
******
******
WRITE A CODE FOR PRINT ABOVE PATTERN ...
*/
#include<stdio.h>
void main()
{
int n,i,j,k;
printf("Enter number of Rows.....\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=5;j++)
{
printf(" ");
}
for(k=1;k<=n;k++)
{
printf("*");
}
printf("\n");
}

}
