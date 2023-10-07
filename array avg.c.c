#include<stdio.h>
int main()
{
int a,i,s=0,k;
float e;
printf("enter the pocket");
scanf("%d",&a);
printf("enter the avarage percentage");
scanf("%d",&k);
int arr[a];
printf("enter the number");
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
s=s+arr[i];
e=s/k;
}
printf("the sum is %d\n",s);
printf("the avarage is %f\n",e);
return 0;
}