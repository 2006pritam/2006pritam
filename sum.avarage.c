#include<stdio.h>
main()
{
int i,a=0,b;
float m;
printf("stop value");
scanf("%d",&b);
for(i=1;i<=b; i++)
{
printf("%d \n",i);
a=a+i;
m=a/2;
}
printf("%d\n",a);
printf("%f\n",m);
}
