#include<stdio.h>
main()
{
    float a,b;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &a);
    b = (a * 9 / 5) + 32;
    printf("the farenhit temperature is %f",b);
}
