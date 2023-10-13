//WRITE A CODE FOR CHECK A STRING IS A PELINDROME OR NOT..

#include<stdio.h>
void main()
{
char str1[30],str2[30];
int length=0,temp=0,flag=0;
printf("Enter a string ->");
scanf("%s",str1);
while(str1[length]!='\0')
{
length++;
}
length--;
while(length>=0)
{
str2[temp]=str1[length];//copying from the last of str1 in str2
temp++;
length--;
}
str2[temp]='\0';
length=0;
temp=0;
while(str1[length]!='\0')
{
if(str1[length]==str2[temp])
{
flag=1;
}
else
{
flag=0;
break;
}
length++;
temp++;
}
if(flag==1)
printf("string is PELINDROME\n");
else
printf("string is not PELINDROME\n");
}
