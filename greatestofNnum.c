//WRITE A PROGRAME FOR CHECK GREATEST OF N NUMBER....
#include<stdio.h>
void main()
{
int n,num,greatest,loop;
printf("How many number you want to enter ->");
scanf("%d",&n);
printf("Enter a number....");
scanf("%d",&num);
greatest=num;
for(loop=1;loop<=n-1;loop++)
{
printf("Enter a number??");
scanf("%d",&num);
if(num>greatest)
greatest=num;
else
greatest=greatest;}
printf("THE GREATEST NUMBER IS %d\n",greatest);
}
