#include<stdio.h>
int main()
{
char n[20],s[20];
int i,j;
printf("enter the string");
scanf("%s",n);
for(i=0;n[i]!='\0';++i);
printf("the length of the string is%d\n",i);
printf("enter the string");
scanf("%s",s);
for(j=0;s[j]!='\0';++j);
if(i>j)
{
printf("1st largest");
}
else
{
printf("2nd is largest");
}
}
