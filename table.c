//WRITE A CODE TO PRINT MULTIPLICATION TABLE..

#include<stdio.h>
void main()
{
int i,n,t;
printf("Enter a number whose table you want to print ->");
scanf("%d",&n);
for(i=1;i<=10;i=i+1)
{
t=n*i;
printf("%dX%2d = %3d\n",n,i,t);

}



}
