//WRITE A PROGRAME TO CALCULATE LCM OF TWO NUMBERS...

#include<stdio.h>
void main()
{
int a,b,max,fact,lcm;
printf("Enter two numbers..\n");
scanf("%d %d",&a,&b);
max=(a>b)?a:b;
fact=max;
while(max<=(a*b))
{
if((max%a==0)&&(max%b==0))
{
lcm=max;
break;
}
else
max=max+fact;
}
printf("LCM of %d and %d = %d\n",a,b,lcm);
}
