//WRITE A CODE FOR CALCULATE FACTORIAL OF A NUMBER ENTERED BY  USER USING RECURSION

#include<stdio.h>
void main()
{
int factorial(int);
int n;
printf("Enter a number ->");
scanf("%d",&n);
printf("  %d! = %d\n",n,factorial(n));
}
int factorial(int a)
{
if(a==1)
 return a;
else
 return a*factorial(a-1);
}

