#include <stdio.h>

#define VOLUME_FACTOR (4.0f / 3.0f)
#define PI 3.14159265358979323846

int main(void)
{
    double radius;
    printf("Type the radius of the sphere: ");
    scanf("%lf", &radius);
    double volume = VOLUME_FACTOR * PI * radius * radius * radius;
    printf("%f\n", volume);


    return 0;
}
