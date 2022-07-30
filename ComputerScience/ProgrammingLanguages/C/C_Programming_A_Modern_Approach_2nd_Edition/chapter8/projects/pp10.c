#include <stdio.h>

#define N 8

int main(void)
{
    int departure_times[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[N] = {600, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    int user_hour, user_minutes;
    scanf("%d:%2d", &user_hour, &user_minutes);
    int user_total_minutes = user_hour * 60 + user_minutes;
    int index;
    if (user_total_minutes < 173 || user_total_minutes > 1222)
        index = N - 1;
    else {
        for (int i = 0; i < N - 1; i++) {
            if (user_total_minutes < 
                    (departure_times[i] + departure_times[i + 1]) / 2) {
                index = i;
                break;
            }
        }
    }

    int departure_hour, departure_min, arrival_hour, arrival_min;
    char departure_meridium, arrival_meridium;

    departure_hour = departure_times[index] / 60;
    departure_min = departure_times[index] % 60;
    arrival_hour = arrival_times[index] / 60;
    arrival_min = arrival_times[index] % 60;

    if (departure_hour < 12) {
        departure_meridium = 'a';
        if (departure_hour == 0)
            departure_hour = 12;
    }
    else {
        departure_meridium = 'p';
        if (departure_hour > 12)
            departure_hour -= 12;
    }

    if (departure_hour < 12) {
        arrival_meridium = 'a';
        if (arrival_hour == 0)
            arrival_hour = 12;
    }
    else {
        arrival_meridium = 'p';
        if (arrival_hour > 12)
            arrival_hour -= 12;
    }

    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
            departure_hour, departure_min, departure_meridium, 
            arrival_hour, arrival_min, arrival_meridium);

    return 0;
}
