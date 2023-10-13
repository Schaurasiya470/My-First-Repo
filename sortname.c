//WRITE A CODE FOR SORT A NAME ALPHABATICALLY...

#include<stdio.h>
#include<string.h>
void main()
{
char temp,name[20];
int length=0,i,j;
printf("Enter a name ->");
scanf("%s",name);
length=strlen(name);
for(i=0;i<length;i++)
{
 for(j=i+1;j<length;j++)
{
 if(name[i]>name[j])
{
 temp=name[i];
 name[i]=name[j];
 name[j]=temp;
}
}
}
printf("Name in Alphabatic order : ");
for(i=0;i<length;i++)
printf("%c",name[i]);
printf("\n");
}
