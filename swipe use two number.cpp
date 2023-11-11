#include<stdio.h>
int main()
{
  int x,y;
  printf("enter the value of x amd y ");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
  printf("after swapping %d\n%d",x,y);
}
