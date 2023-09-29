//write a program in c the program ncalculator number do while loop// 
#include<stdio.h>
main()
{
int n,s=0;
do
{
printf("enter the number");
scanf("%d",&n);
s+=n;
}
while(n!=0);
printf("the sum is %d\n",s);
}
