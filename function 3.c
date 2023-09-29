#include<stdio.h>
sum()
{
int a,b,c=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the first number");
scanf("%d",&b);
c=a+b;
printf("the sum is %d\n",c);
}
sub()
{
int a,b,c=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the first number");
scanf("%d",&b);
c=a-b;
printf("the sub is %d\n",c);
}
mul()
{
int a,b,c=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the first number");
scanf("%d",&b);
c=a*b;
printf("the mul is %d\n",c);
}
div()
{
int a,b,c=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the first number");
scanf("%d",&b);
c=a/b;
printf("the div is %d\n",c);
}
main()
{
int n;
printf("\n press 1 for sum \n form 2 for subtraction \n form 3 for multiple \n for 4 division");
scanf("%d",&n);
switch(n)
{
case 1: sum();
break;
case 2: sub();
break;
case 3: mul();
break;
case 4: div();
break;
default: printf("invalid");
}
}
