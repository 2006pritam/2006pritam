#include<stdio.h>
main()
{
	char a[10],b;
	int n,i,c;
	printf("Enter the number");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';++i)
	{
	b=a[i];	
	if (b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
	{
		++n;
		}
		else
		{
		++c;	
			}	
	}
	printf("the vowel is %d\n",n);
	printf("the consonent is %d",c);
}