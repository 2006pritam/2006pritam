#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    unsigned int cnt = 0;
    printf("Enter the number of rows = ");
    scanf("%u",&rows);
    cnt = ((rows * 2) - 1);
    for(x=1; x<=cnt; ++x)
    {
        for(y=1; y<=cnt; ++y)
        {
            if((y==x) || (y==((cnt - x) + 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
