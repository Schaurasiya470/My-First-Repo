//WRITE A CODE FOR CALCULATE THE VALUE  OF EXPRESSIONS..
//1.y=ax%b
//2.y=ax^2+b^2
//3.y=a-bx
//4.y=a+(x/b)
#include<stdio.h>
void main()
{
int a,x,b,n;
float y;
printf("Enter n\n");
scanf("%d",&n);
printf("Enter a,x,b\n");
scanf("%d%d%d",&a,&x,&b);
switch(n)
{
case 1:
y=(a*x)%b;
break;
case 2:
y=(a*x*x)+(b*b);
break;
case 3:
y=a-(b*x);
break;
case 4:
y=a+(x/b);
break;
}
if((n>=1)&&(n<=4))
printf("y=%f\n",y);
}
