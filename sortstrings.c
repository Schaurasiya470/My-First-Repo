//WRITE A CODE FOR SORT 5 NAMES ALPHABATICALLY...

#include<stdio.h>
#include<string.h>
void main()
{
char name[5][20],dnam[20];
int i,j;
for(i=0;i<5;i++)
{
printf("Enter name[%d] ->",i);
scanf("%s",name[i]);
}
for(i=0;i<5;i++)
//printf("length of [%s] = %d\n ",name[i],strlen(name[i]));
{
 for(j=i+1;j<5;j++)
{
 if(strcmp(name[i],name[j])>0)
{
  strcpy(dnam,name[i]);
  strcpy(name[i],name[j]);
  strcpy(name[j],dnam);
}
}
}
printf("\nThe sorted names are : \n");
for(i=0;i<5;i++)
printf("%s\n",name[i]);
}
