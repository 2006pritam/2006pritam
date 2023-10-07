#include<stdio.h>
int
main ()
{
  int arr[4], i, s = 0;
  printf ("enter 4 number");
  for (i = 0; i <= 3; i++)
    {
      scanf ("%d", &arr[i]);
      s = s + arr[i];
    }
  printf ("the sum is %d\n", s);
  return 0;
}
