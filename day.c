#include <stdio.h>
main()
{
    int days, years, months;
    printf("Enter days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d ", days);
}
