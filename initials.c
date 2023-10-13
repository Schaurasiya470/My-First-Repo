//WRITE A CODE FOR PRINT INITIALS OF A TEXT LIKE BELOW
//"HE GOES TO MARKET DAILY" ->THEN PRINT "HGTMD"

#include<stdio.h>
void main()
{
char text[50];
int len=0;
printf("Enter a text ->");
scanf("%[^\n]s",text);
while(text[len]!='\0')
{
 len++;
}
len=0;
printf("Initials of the TEXT\n[%s] is : ",text);
printf("%c",text[0]);
while(text[len]!='\0')
{
 if((text[len]==' ')&&(text[len+1]!=' '))
 printf("%c",text[len+1]);
len++;
}
printf("\n");
}
