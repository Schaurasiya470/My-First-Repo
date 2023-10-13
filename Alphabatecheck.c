//WRITE A CODE TO CHECK TEXT IS EITHER ALPHABATE OR NOT...

#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
int length,i=0;
int flag=0;
printf("Enter a Text which is checked by program Text is \nAlphabate or not\n");
scanf("%[^\n]s",str);
length=strlen(str);
length=0;
while(str[length]!='\0')
{
if((str[length]>='a')&&(str[length]<='z')||(str[length]==' '))
flag=1;
else
{
flag=0;
break;
}
length++;
}
if(flag==1)
printf("TEXT is Alphabate\n");
else
printf("TEXT is not Alphabate\n");
}
