//WRITE A CODE FOR SORT NUMBERS IN INCREAGING ORDER....

#include<stdio.h>
void main()
{
int n,i,j,c,num[5];
printf("How many number you want to sort..\n");
scanf("%d",&n);
for(i=0;i<n;i++)
   {
     printf("Enter num[%d]?",i);
     scanf("%d",&num[i]);
    }
printf("Numbers in increasing order are ...\n");
for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
   {
     if(num[i]>num[j])
      {
        c=num[i];
          num[i]=num[j];
        num[j]=c;
       }
    }
  printf("%d ",num[i]);
 }
 printf("\n");
}
