//WRITE A CODE TO CHECK VOWELS IN A GIVEN STRING...

#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
int len;
int vc=0,cc=0;
printf("Enter a Text ->");
scanf("%[^\n]s",str);
len=strlen(str);
len=0;
while(str[len]!='\0')
{
if((str[len]=='a')||(str[len]=='e')||(str[len]=='i')||(str[len]=='o')||(str[len]=='u'))
vc++;
else
cc++;
if(str[len]==' ')
cc--;
len++;
}
printf("no of vowels = %d\nno of consonant = %d\nTotal no of character in this Text = %d\n",vc,cc,vc+cc);
}
