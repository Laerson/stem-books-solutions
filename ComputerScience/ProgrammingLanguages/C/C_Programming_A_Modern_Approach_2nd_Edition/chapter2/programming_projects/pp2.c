#include <stdio.h>

#define VOLUME_FACTOR (4.0f / 3.0f)
#define RADIUS 10.0f
#define PI 3.14159265358979323846

int main(void)
{
    double volume = VOLUME_FACTOR * PI * RADIUS * RADIUS * RADIUS;
    printf("%f\n", volume);


    return 0;
}
