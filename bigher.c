#include<stdio.h>
#include<string.h>
#include<conio.h>
 int main()
{
char st1[20],st2[20],st3[20];
int i,j;
printf("\n enter first string:");
scanf("%s",st1);
printf("\n enter second string:");
scanf("%s",st2);
if(strcmp(st1,st2)>0)
printf("\n %s alphabet is bigher",st1);
else
printf("\n %s alphabet is bigher",st2);
return 0;
}