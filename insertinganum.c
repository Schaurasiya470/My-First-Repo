//WRITE A CODE FOR INSERT A NUMBER BETWEEN A NUMBER SEQUENCE...

#include<stdio.h>
void main()
{
int n;
int i;
int n1,index;
int num[10];
printf("Enter limit of sequence.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter num[%d]",i);
scanf("%d",&num[i]);
}
printf("Enter a number and its index[1-%d] which you want to insert.\n",n);
scanf("%d %d",&n1,&index);
for(i=n;i>=index;i--)
{
num[i+1]=num[i];
}
num[index]=n1;

printf("New number sequence is...\n");

for(i=1;i<=n+1;i++)
{
printf("%d ",num[i]);
}
printf("\n");
}
