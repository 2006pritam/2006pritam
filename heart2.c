#include <stdio.h>

int main()
{

int n,row,col;
printf("enter the number");
scanf("%d",&n);
for(row=0;row<n;row++)
{
  for(col=0;col<n+1;col++)
     if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
          printf("*");
        else
          printf(" ");

    printf("\n");

}
  return 0;
}
