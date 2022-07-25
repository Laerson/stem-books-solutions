#define SIZE (int) (sizeof(temperature_readings) / sizeof(temperature_readings[0]))

double temperature_readings[30][24];
double sum = 0;
for(int i = 0; i < SIZE; i++)
    sum += temperature_readings[i];
double average = sum / SIZE;
