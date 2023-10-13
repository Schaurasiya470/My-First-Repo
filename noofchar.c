//WRITE A PROGRAM TO FIND TOTAL NO OF CHARACTER IN A GIVEN A STRING..

#include<stdio.h>
void main()
{
char text[50];
int wc=0,i=0,word=0;
printf("Enter a TEXT ->");
scanf("%[^\n]s",text);
while(text[i]!='\0')
{
wc++;
if(text[i]==' ')
{
wc--;
word++;
}
i++;
}
printf("Total no of charcters in the above TEXT = %d\n",wc);
printf("Total no of words in the above TEXT = %d\n",word+1);

}
