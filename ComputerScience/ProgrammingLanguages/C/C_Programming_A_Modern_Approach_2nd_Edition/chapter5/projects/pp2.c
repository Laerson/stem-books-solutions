#include <stdio.h>

int main(void)
{
    printf("Enter a 24-hour time: ");
    int hour_24, min, hour_12;
    scanf("%d:%d", &hour_24, &min);
    hour_12 = (hour_24 % 12) == 0 ? 12 : (hour_24 % 12);

    printf("Equivalent 12-hour time: %d:%.2d ", hour_12, min);
    if (hour_24 >= 12)
        printf("PM\n");
    else
        printf("AM\n");

    return 0;
}
