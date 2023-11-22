#include<stdio.h>
main()
{
    int a=0,b=1,n,c,l;
    printf("enter a number to obtain fibonacci series");
    scanf("%d",&n);
    printf("the series is \n %d\n %d\n",a,b);
    l=2;
    while(l<n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        l++;
    }
}