#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day)
{
    bool leap_year;
    if (year % 4 != 0)
        leap_year = false;
    else if (year % 100 != 0)
        leap_year = true;
    else if (year % 400 != 0)
        leap_year = false;
    else
        leap_year = true;

    *day = day_of_year;
    *month = 1;
    if (*day - 31 <= 0)
        return;
    *day -= 31;
    *month += 1;
    if (leap_year && *day - 29 <= 0)
        return;
    if (!leap_year && *day - 28 <= 0)
        return;
    if (leap_year)
        *day -= 29;
    else
        *day -= 28;
    *month += 1;
    
    for (int i = 0; i < 2; i++) {
        if (*day - 31 <= 0)
            return;
        *day -= 31;
        *month += 1;

        if (*day - 30 <= 0)
            return;
        *day -= 31;
        *month += 1;
    }
    if (*day - 31 <= 0)
        return;
    *day -= 31;
    *month += 1;

    for (int i = 0; i < 2; i++) {
        if (*day - 31 <= 0)
            return;
        *day -= 31;
        *month += 1;

        if (*day - 30 <= 0)
            return;
        *day -= 31;
        *month += 1;
    }
}

        
