#include<stdio.h>
#include<string.h>
 int main()
{
char st1[20],st2[20],st3[20];
int i,j;
printf("\n enter first string:");
gets(st1);
printf("\n enter second string:");
gets(st2);
strcat(st1,st2);
puts(st1);
return 0;
}