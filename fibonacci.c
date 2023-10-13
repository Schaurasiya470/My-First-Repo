//WRITE A CODE FOR PRINT FIBONACCI SERIES UPTO N

#include<stdio.h>
void main()
{
int i,a=0,b=1,c,n;
printf("How many numbers you want in FIBONACCI SERIES ->");
scanf("%d",&n);
printf("Series are.......\n");
printf("%d\n%d\n",a,b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}

}
