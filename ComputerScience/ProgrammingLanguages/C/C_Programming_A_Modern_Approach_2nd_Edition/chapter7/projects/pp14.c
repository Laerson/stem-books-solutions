#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0, average;

    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    for(;;) {
        average = (x / y + y) / 2;
        if (fabs(average - y) < .00001 * y)
            break;
        y = average;        
    }

    printf("Square root: %f\n", y);


    return 0;
}
