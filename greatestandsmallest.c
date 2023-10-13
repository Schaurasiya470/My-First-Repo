//WRITE A PROGRAME FOR CHECK GREATEST AND SMALLEST OF N NUMBER....
#include<stdio.h>
void main()
{
int n,num,greatest,smallest,loop;
printf("How many number you want to enter ->");
scanf("%d",&n);
printf("Enter a number??");
scanf("%d",&num);
greatest=num;
smallest=num;
for(loop=1;loop<=n-1;loop++)
{
printf("Enter a number??");
scanf("%d",&num);
if(num>greatest)
greatest=num;
else
greatest=greatest;
if(num<smallest)
smallest=num;
else
smallest=smallest;
}
printf("THE GREATEST AND SMALEST NUMBER ARE %d AND %d\n",greatest,smallest);
}
//for(loop=1;loop<=n-1;loop++)
//{printf("Enter a number??");

