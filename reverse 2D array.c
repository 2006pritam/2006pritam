#include <stdio.h>

int main ()    
{    
    int arr[3][3], i, j;     
    printf("Enter 9 numbers:\n");      
    
    for (i = 0; i < 3; i++)    
    {    
        for (j = 0; j < 3; j++)    
        {    
            scanf("%d", &arr[i][j]);    
        }    
    }    
    
    printf("\nPrinting the elements ....\n");     
    
    for (i = 2; i >= 0; i--)    
    {    
        printf("\n");    
        for (j = 2; j >= 0; j--)    
        {    
            printf("%d\t", arr[i][j]);    
        }  
     return 0;  
    } 
}
