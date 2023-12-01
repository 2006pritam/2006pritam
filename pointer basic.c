#include<stdio.h>
int main()
{
int a,b;
int *p,*q;
a=10;
b=20;
p=&a;
q=&b;
printf("enter the a value is %d\n",a);
printf("enter the b value is %d\n",b);
printf("enter the a address is %u\n",&a);
printf("enter the b address is %u\n",&b);
printf("enter the a address is %d\n",p);
printf("enter the b address is %d\n",q);
printf("enter the a value is %d\n",*p);
printf("enter the b value is %d\n",*q);
}