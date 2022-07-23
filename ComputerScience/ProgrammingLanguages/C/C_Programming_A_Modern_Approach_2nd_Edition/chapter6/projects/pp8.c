#include <stdio.h>

int main(void)
{
    int num_days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (int i = 1; i < start_day; i++)
        printf("   ");

    for (int i = 1; i <= num_days; ++i, start_day++) {
        printf("%2d ", i);

        if(start_day == 7) {
            printf("\n");
            start_day = 0;
        }
    }
    printf("\n");

    return 0;
}
