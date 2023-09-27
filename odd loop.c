#include<stdio.h>
main()
{
	int a,i;
printf("enter stop value");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
	if(i%2==1)
	{
		printf("%d\n",i);
	}
}
}
