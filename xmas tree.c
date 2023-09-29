#include <stdio.h>
int n=10;
int main()
{
  int i,j,m;
  float k;
 
  m=n-1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<(m+2*n);j++)
    {
      printf(" ");
    }
    m--;
 
    for(k=0;k<=i;k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
 
  m=n-1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((m+(2*n))-5);j++)
    {
      printf(" ");
    }
    m--;
 
    for(k=0;k<(i+6);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
 
  m=n-1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((m+(2*n))-9);j++)
    {
      printf(" ");
    }
    m--;
 
    for(k=0;k<(i+10);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
 
  for(i=0;i<(n-n/2);i++)
  {
    for(j=0;j<((3*n)-3);j++)
    {
      printf(" ");
    }
 
    for(k=0;k<6;k++)
    {
    printf("*");
    }
    printf("\n");
  }
 
  return 0;
}
