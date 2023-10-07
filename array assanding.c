#include<stdio.h>
main()
{
  int a[5],i,j,r;

  printf("enter number of the array element");
  for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]); 
   } 
 for(i=0;i<5;i++)
{
  for(j=i+1;j<5;j++)
  {

if(a[i]>a[j])
{
r=a[i];
a[i]=a[j];
a[j]=r;
}
}
}
  printf("array element:");
  for(i=0;i<5;i++) 
  {
    printf("%d",a[i]);
    }
  }
