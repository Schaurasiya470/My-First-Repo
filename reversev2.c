//WRITE A CODE FOR REVERSE A NUMBER ENTERED BY USER
#include<stdio.h>
void main()
{
int i=0;
char num[20];
printf("Enter a number\n");
scanf("%[^\n]s",num);
while(num[i]!='\x0')
{
i++;
}
printf("\n");
printf("Reversed number is...\n");

for(i=i-1;i>=0;i--)
{
printf("%c",num[i]);
}
printf("\n");
}
