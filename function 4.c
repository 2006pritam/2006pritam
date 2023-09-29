#include<stdio.h>
int sum()
{
int x,y,s=0;
printf("enter the first number");
scanf("%d",&x);
printf("enter the second number");
scanf("%d",&y);
s=x+y;
return s;
}
int main()
{
printf("sum is %d",sum());
}
