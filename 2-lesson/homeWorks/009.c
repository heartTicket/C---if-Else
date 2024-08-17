#include <stdio.h>

int main() {

    int month, years, remining_months;

    printf("Enter the month: ");
    scanf("%d", &month);

    years = month / 12;
    remining_months = month % 12;

    printf("years = %d\nremining-month = %d", years, remining_months);
    return 0;
}