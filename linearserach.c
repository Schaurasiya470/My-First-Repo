//WRITE A PROGRAME TO SEARCH A CHARACTER  IN A STRING...

#include<stdio.h>
#include<string.h>
void main()
{
char str[20],ch,dummy;
int i=0,length=0,flag=0;
printf("Enter a string..\n");
scanf("%[^\n]s",str);
scanf("%c",&dummy);
printf("Enter a character which you want to serach..\n");
scanf("%c",&ch);
length=strlen(str);

while(i<length)
{
if(str[i]==ch)
flag=1;
i++;
}
if(flag==1)
printf("%c is found\n",ch);
else
printf("%c is not found \n",ch);

}
