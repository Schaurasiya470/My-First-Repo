//WRITE A CODE FOR CALCULATE FACTORIAL OF A NUMBER...

#include<stdio.h>
void main()
{
int n,fact=1,loop;
printf("Enter a Number..\n");
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
{
fact=fact*loop;
}
printf("Factorial of the Number is %d\n",fact);
}
