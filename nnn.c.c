#include<stdio.h>
int main()
{
int i,s=0,a;
printf("enter the pocket");
scanf("%d",&a);
int arr[a];
printf("enter 4 number");
for(i=0;i<=a;i++)
{
scanf("%d",&arr[i]);
s=s+arr[i];
}

printf("the sum is %d\n",s);
return 0;
}