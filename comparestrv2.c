//WRITE A CODE TO COMPARE TWO STRING USING STRING FUNCTION..

#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[30];
int n;
printf("Enter two strings\n");
scanf("%s %s",str1,str2);
n=strcmp(str1,str2);
if(n>0)
{
printf("%s is greater than %s\n",str1,str2);
printf("In Dictionary %s will come first\n",str2);
}
else if(n<0)
{
printf("%s is greater than %s\n",str2,str1);
printf("In Dictionary %s will come first\n",str1);
}
else
printf("%s and %s both are same\n",str1,str2);
}
