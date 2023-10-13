//WRITE A CODE TO PRINT REVERSE OF A NUMBER...

#include<stdio.h>
void main()
{
int n,r;
printf("Enter a number which you want to reverse.\n");
scanf("%d",&n);
printf("\nThe reversed number is....\n");

while(n>0)
{
r=n%10;
printf("%d",r);
n=n/10;
}
printf("\n");
}
