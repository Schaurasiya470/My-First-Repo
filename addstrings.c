//WRITE A CODE TO ADD TWO STRINGS WITHOUT USING STRING FUNCTION [CALLED CONCATENATION]

#include<stdio.h>
void main(void)
{
char str1[10],str2[10];
int l1=0,l2=0;
printf("Enter two strings\n");
scanf("%s %s",str1,str2);
while(str1[l1]!='\0')
{
l1++;
}
while(str2[l2]!='\0')
{
l2++;
}
l2=0;
while(str2[l2]!='\0')
{
str1[l1]=str2[l2];
l1++;
l2++;
}
str1[l1]='\0';
l1=0;
printf("The concatenated string is : ");
while(str1[l1]!='\0')
{
printf("%c",str1[l1]);
l1++;
}
printf("\n");
}
