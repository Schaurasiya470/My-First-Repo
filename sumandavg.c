//WRITE A CODE FOR CALCULATE SUM AND AVERAGE OF 'N' NUMBERS...

#include<stdio.h>
void main()
{
int num[10];
int l,sum=0;
int n;
float avg;
printf("How many numbers of you want to find sum and average...\n");
scanf("%d",&n);
for(l=1;l<=n;l++)
{
printf("Enter a number num[%d]?",l);
scanf("%d",&num[l]);
sum+=num[l];
}
//avg=sum/l;
avg=sum*(1.0)/(l-1);   //Implicite data typecasting
printf("\nSum=%d and avg=%.2f\n",sum,avg);
}
