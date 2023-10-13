/*
1
22
333
4444
55555
or
1
12
123
1234
12345
or
1
23
456
78910
1112131415

*/
#include<stdio.h>
void main()
{
int n,i,j,k=0;
printf("Enter no of Rows........\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
  {
k=k+1;
//printf("%d",i); //FOR 1ST PATTERN......
printf("%d",j);   //FOR 2ND PATTERN......
//printf("%d",k); //FOR 3RD PATTERN......
}
printf("\n");
}
}
