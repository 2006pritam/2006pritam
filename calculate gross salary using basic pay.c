#include <stdio.h>

int main() {
    float basic_salary, gross_salary, da, hra;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    da = basic_salary * 0.4;
    hra = basic_salary * 0.2;
    gross_salary = basic_salary + da + hra;

    printf("Gross salary = %6.2f\n", gross_salary);

    return 0;
}