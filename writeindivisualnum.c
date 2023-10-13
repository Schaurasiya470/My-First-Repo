/*WRITE A CODE FOR PRINT NUMBER LIKE
1
2
3
4
5
WHENEVER USER ENTER A NUMBER 12345*/
#include<stdio.h>
void main()
{
 int i=0;
 char num[10];
 printf("Enter a number\n");
 scanf("%s",num);
 printf("printing numbers....\n"); 
while(num[i]!='\x0')
{
 printf("%c\n",num[i]);
 i++;
}
}
