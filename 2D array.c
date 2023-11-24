#include <stdio.h>
 main() 
{
printf("enter 9 number");
    int arr[3][3], i,j;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    scanf("%d",&arr[i][j]);
    printf("\nprintinf elements...\n");
    }
    }
    for(i=0;i<3;i++)
    {
    printf("\n");
    
    for(j=0;j<3;j++)
    {
    printf("%d\t",arr[i][j]);
    }
    }
    }