#include <stdio.h>
 int main()
{
  int n,m;
  printf("enter the sell value\n");
  printf("enter the value\n");
  scanf("%d %d",&n,&m);
  int a[n][m];
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]>a[i+1][j])
      {
        int temp =a[i][j];
        a[i][j]=a[i+1][j];
        a[i+1][j]=temp;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    printf("%d ",a[i][j]);
    printf("\n");
  }
}
