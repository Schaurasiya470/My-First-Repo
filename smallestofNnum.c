//WRITE A PROGRAME FOR CHECK SMALLEST OF N NUMBER....
#include<stdio.h>
void main()
{
int n,num,smallest,loop;
printf("How many number you want to enter\n");
scanf("%d",&n);
printf("Enter a number??");
scanf("%d",&num);
smallest=num;
for(loop=1;loop<=n-1;loop++)
{
printf("Enter a number??");
scanf("%d",&num);
if(num<smallest)
smallest=num;
else
smallest=smallest;}
printf("THE SMALLEST NUMBER IS %d\n",smallest);
}
