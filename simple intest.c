#include <stdio.h>
main()
{
	int a,b,c,d; 
    float e;
    printf("Enter principle amount: ");
    scanf("%d", &a);
    printf("Enter rate of interest: ");
    scanf("%d", & b);
    printf("Enter time in years: ");
    scanf("%d", &c);
    d = ( a * b * c);
    e=d/100;
    printf("Simple Interest = %f", e);
}
