//WRITE A CODE FOR PRINT MULTIPLICATION OF TWO MATRICES...


#include<stdio.h>
void main()
{
 int matrix1[3][3],matrix2[3][3],matrix3[3][3];
 int i,j,sum=0;
 printf("Enter Ist matrix elements\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
  printf("Enter matrix1[%d][%d] ->",i,j);
  scanf("%d",&matrix1[i][j]);
}
}
  printf("Enter IInd matrix elements\n");
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
  printf("Enter matrix2[%d][%d] ->",i,j);
  scanf("%d",&matrix2[i][j]);
}
}
 for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
 {
  for(k=0;k<3;k++)
 {
    

}

}
printf("The new matrix is ...\n");

for(i=0;i<3;i++)
{
// printf("|");
 for(j=0;j<3;j++)
{
 printf("%d ",matrix3[i][j]);
}
printf("\n");
}
}
