//WRITE  A CODE FOR PRINT 'N' EVEN NUMBERS...

#include<stdio.h>
void main()
{
int n,loop;
printf("Enter a Number which you want to print all even number upto that number");
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
{
if(loop%2==0)

printf("\n%d\n",loop);
}
}
