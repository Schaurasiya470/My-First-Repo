//WRITE A CODE FOR PRINT GRAPH OF EXPONANTIAL FUNCTION  ON THE SCREEN...

#include<stdio.h>
#include<math.h>
void main()
{
float x,y;
int loop;
printf("\nTHE GRAPH OF EXPONANCIAL FUNCTION IS APPROXIMATLY SHOWN BELOW......\n");
printf("\nWHERE +VE Y-AXIS AND X-AXIS IS TAKEN ON HORIZANTAL AND VERTICAL RESPECTIVELY.\n\n");
printf("______________________________________________________________________");
for(x=0;x<=4;x=x+0.25)
{
y=exp(x);
for(loop=0;loop<=y;loop++)
{
printf(" ");}
printf("*");
printf("\n");
printf("|");

//printf("x=%f and y=%f\n",x,y);
}}
