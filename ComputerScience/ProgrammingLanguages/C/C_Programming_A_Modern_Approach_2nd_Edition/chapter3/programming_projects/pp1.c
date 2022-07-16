#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    int month, date, year;
    scanf("%d/%d/%d", &month, &date, &year);
    printf("You entered the date %.4d%.2d%.2d\n", year, month, date);

    return 0;
}
