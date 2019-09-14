#include<stdio.h>
main()
{
int bs,hra,gs,i;
for(i=1;i<=5;i++)
{
   printf("enter bs and hra for emp%d",i);
   scanf("%d%d",&bs,&hra);
   gs=bs+hra;
   printf("salary=%d",gs);
}
}
