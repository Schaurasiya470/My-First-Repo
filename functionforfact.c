//WRITE A CODE FOR CALCULATE FACTORIAL OF A NUMBER...

#include<stdio.h>
void main()
{
int factorial(int n);
int n;
printf("Enter a number ->");
scanf("%d",&n);
printf("%d! = %d\n",n,factorial(n));
}

int factorial(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
{
 f*=i;
}
return f;

}
