#include<stdio.h>
int main()
{
    int i,n,a,b=0,j,f;
    
    printf("enter the strong number");
    scanf("%d",&n);
    a=n;
    for (j = n; j > 0; j = j / 10) {
        f = 1;
        for (i = 1; i <= j % 10; i++) {
            f = f * i;
}
b=b+f;
    }
    if(b==a)
    {
        printf("the strong number");
    }
    else
    {
    printf("the not strong number");
    }
    return 0;
}
    