#include<stdio.h>
void sum(int x,int y)
{
printf("the sum is %d",x+y);
}
int main()
{
int x,y;
printf("enter the 1st number");
scanf("%d",&x);
printf("enter the 2nd number");
scanf("%d",&y);
sum(x,y);
return 0;
}
