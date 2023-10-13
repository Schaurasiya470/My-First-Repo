//WRITE A CODE FOR CHECK PRIMARLITY OF A NUMBER ...

#include<stdio.h>
void main()
{
int n,loop,factor=0;
printf("Enter a number..\n");
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
{
if(n%loop==0)
factor=factor+1;
}
if(factor==2)
printf("PRIME NUMBER\n");
else
printf("NOT A PRIME NUMBER\n");
}
