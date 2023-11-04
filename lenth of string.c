#include<stdio.h>
int main()
{
char n[20];
int i;
printf("enter the string");
scanf("%s",n);
for(i=0;n[i]!='\0';++i);
printf("the length of the string is%d\n",i);
}
