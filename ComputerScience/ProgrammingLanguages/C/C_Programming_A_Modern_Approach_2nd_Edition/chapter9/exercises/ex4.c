int day_of_year (int month, int day, int year)
{
    int leap_year;
    if (year % 4 != 0)
        leap_year = 0;
    else if (year % 100 != 0)
        leap_year = 1;
    else if (year % 400 != 0)
        leap_year = 0;
    else
        leap_year = 1;

    if (month > 1)
        day += 31;
    if (month > 2)
        day += 28;
    if (leap_year)
        day++;
    if (month > 3)
        day += 31;
    if (month > 4)
        day += 30;
    if (month > 5)
        day += 31;
    if (month > 6)
        day += 30;
    if (month > 7)
        day += 31;
    if (month > 8)
        day += 31;
    if (month > 9)
        day += 30;
    if (month > 10)
        day += 31;
    
    return day;
}
