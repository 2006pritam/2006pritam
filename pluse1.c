#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%u",&rows);
    for(x=1; x<=((rows * 2) - 1); ++x)
    {
        // For the center horizontal plus
        if(x == rows)
        {
            for(y=1; y<=((rows * 2) - 1); ++y)
            {
                //print plus symbol
                printf("+");
            }
        }
        else
        {
            for(y=1; y<=(rows-1); ++y)
            {
                printf(" ");
            }
            printf("+");
        }
        printf("\n");
    }
    return 0;
}
