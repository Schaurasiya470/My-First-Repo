//WRITE A CODE FOR DELETE A NUMBER FROM A NUMBER SEQUENCE...

#include<stdio.h>
void main()
{
int n;
int i;
int index;
int num[10];
printf("Enter limit of sequence.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter num[%d]",i);
scanf("%d",&num[i]);
}
printf("Enter index[1-%d] of number which you want to delete.\n",n);
scanf("%d",&index);
for(i=index;i<=n;i++)
{
num[i]=num[i+1];
}
printf("New number sequence is...\n");

for(i=1;i<=n-1;i++)
{
printf("%d ",num[i]);
}
printf("\n");
}
