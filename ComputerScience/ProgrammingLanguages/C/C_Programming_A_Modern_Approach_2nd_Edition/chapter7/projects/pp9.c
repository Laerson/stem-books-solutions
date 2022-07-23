#include <stdio.h>
#include <ctype.h>

int main(void) {

    int hour, minute;
    char meridium;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &meridium);
    if (toupper(meridium) == 'P' && hour != 12) {
        hour += 12;
    }
    else if (hour == 12)
        hour = 0;

    printf("Equivalent 24-hour time: %d:%.2d\n", hour, minute);

    return 0;
}
