//WRITE A PROGRME TO CALCULATE THE VALUE OF COS WITHOUT USING MATH FUNCTION FOR COSINE

#include<stdio.h>
#include<math.h>
void main()
{
int i,j,sign=-1,fact=1;
long int n;
float upper,term,x,cosine=1;
printf("Enter Angle in Radian and no of term upto.. \n");
scanf("%f",&x);
scanf("%ld",&n);
for(i=2;i<=n;i+=2)
{
upper=pow(x,i);
for(j=1;j<=i;j++)
{
fact*=i;
}
term=upper/fact;
fact=1;
cosine+=sign*term;
sign*=-1;
}
printf("\nHence cos(%.2f) is equal to %.2f\n",x,cosine);
}


