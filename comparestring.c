// WRITE A CODE TO COMPARE TWO STRING..

#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[30];
int l1=0,l2=0,flag=0;
int max,loop;
printf("Enter two strings\n");
scanf("%s %s",str1,str2);
l1=strlen(str1);
l2=strlen(str2);
max=(l1>l2)?l1:l2;

for(loop=0;loop<=max;loop++)
{
flag=0;
if(str1[loop]>str2[loop])
{
  printf("[%s] is greater than [%s]\n",str1,str2);
  printf("In Dictionary [%s] will comes first\n",str2);
  break;
}
else if(str1[loop]<str2[loop])
{
  printf("[%s] is greater than [%s]\n",str2,str1);
   printf("In Dictionary [%s] will comes first\n",str1);
break;
}
else
{
 flag=1;
 continue;}
}
if(flag==1)
 printf("[%s] and [%s] both strings are same\n",str1,str2);

}
