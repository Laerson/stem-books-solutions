#include <stdio.h>

#define N 8

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    printf("Enter a 24-hour time: ");
    int user_hour, user_minutes, departure_time, arrival_time;
    scanf("%d:%2d", &user_hour, &user_minutes);
    int user_total_minutes = user_hour * 60 + user_minutes;

    find_closest_flight(user_total_minutes, &departure_time, &arrival_time);

    int departure_hour, departure_min, arrival_hour, arrival_min;
    char departure_meridium, arrival_meridium;

    departure_hour = departure_time / 60;
    departure_min = departure_time % 60;
    arrival_hour = arrival_time / 60;
    arrival_min = arrival_time % 60;

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

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    int departure_times[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[N] = {600, 712, 811, 900, 968, 1075, 1280, 1438};

    int index;
    if (desired_time < 173 || desired_time > 1222)
        index = N - 1;
    else {
        for (int i = 0; i < N - 1; i++) {
            if (desired_time < 
                    (departure_times[i] + departure_times[i + 1]) / 2) {
                index = i;
                break;
            }
        }
    }
    
    *departure_time = departure_times[index];
    *arrival_time = arrival_times[index];
}
