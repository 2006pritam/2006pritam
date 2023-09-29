#include<stdio.h>
int main()
{
  int i,n,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    printf("\n");
    for(n=1;n<=a;n++)
    {
      printf("  ");
    }
    for(n=1;n<=a+3;n++)
    {
      printf(" *");
    }
    }
    for(i=1;i<=a;i++)
    {
      printf("\n");
      for(n=1;n<=a;n++)
      {
        printf("  ");
      }
      printf(" *");
    }
    for(i=1;i<=a;i++)
    {
      printf("\n");
      for(n=1;n<=(a-i);n++)
      {
        printf("  ");
      }
      for(n=1;n<=i;n++)
      {
        printf("   *");
      }
            
    }
    
    return 0;  
}
