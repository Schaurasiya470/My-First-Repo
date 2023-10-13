//WRITE A PROGRAME TO CHECK EGLIGIBLITY FOR A COURSE GIVEN MARKS OF SUBJECTS...


#include<stdio.h>
void main()
{
 int phy,che,math,s,t;
 printf("Enter the marks of physics,chemistry and math\n");
 scanf("%d%d%d",&phy,&che,&math);
  s=phy+math;
  t=phy+che+math;
if(((phy>40)&&(che>50)&&(math>60)&&(s>150))||
((phy>40)&&(che>50)&&(math>60)&&(t>200)))

  printf("Egligible for Course...\n");

else

  printf("Not Egligible for course...\n");

}