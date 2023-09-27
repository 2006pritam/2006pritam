#include<stdio.h>
main()
{
int i,a=1,b;
printf("stop value");
scanf("%d",&b);
for(i=1;i<=b; i++)
{
printf("%d \n",i);
a=a*i;
}
printf("%d\n",a);
}
