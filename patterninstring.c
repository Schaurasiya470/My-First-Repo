/*WRITE A CODE FOR PRINT BELOW LIKE PATTERN...
S
SA
SAC
SACH
SACHI
SACHIN
*/
#include<stdio.h>
void main()
{
char str[20];
int len=0,i,j;
printf("Enter a string ->");
scanf("%s",str);
while(str[len]!='\0')
{
len++;
}
for(i=0;i<len;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",str[j]);

}
printf("\n");
}

}
