#include<stdio.h>
int i=0;
void main()
{
 int a;
 scanf("%d",&a);
 if(a>0)
 {
  while(a>9)
  {
    a=a/10;
    i++;
  }
 printf("total digit %d",i+1);
 }
 else
  {
   printf("No should b greater than 0");
  }
  getch();
}
