
//WRITE A PROGRAME TO CONVERT TEMPRATURE FROM DEGREE CELCIUS TO DEGREE FAHRENHEIT...
#include<stdio.h>
void main()
{
float degc,degf;
//printf("Enter temprature in degree celcius..\n");
printf("Enter temprature in degree fahrenheit..\n");
//scanf("%f",&degc);
scanf("%f",&degf);
//degf=((float)9/5*degc)+32;      //Explicite data type casting
 degc=(float)(5*(degf-32))/9;
//printf("Temprature in degree fahrenheit is %.2f.\n",degf);}
printf("Temprature in degree celcius is %.2f.\n",degc);
}
