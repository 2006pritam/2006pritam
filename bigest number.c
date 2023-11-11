#include<stdio.h>
main()
{
int a,b,c;
printf("enter the 3 number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
printf("a is biggest");
else
{
if(b>c)
printf("b is biggest");
else
printf("c is biggest");
}
}
