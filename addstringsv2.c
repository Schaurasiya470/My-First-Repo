//WRITE A CODE FOR ADD TWO STRINGS USING STRING FUNCTION

#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
printf("Enter two strings \n");
scanf("%s %s",str1,str2);
printf("The concatenated string is : %s\n",strcat(str1,str2));
}
