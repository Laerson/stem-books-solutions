#include <stdio.h>

int main (void)
{
    float num, largest = 0.0f;

    for(;;) {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num <= 0)
            break;
        if (num > largest)
            largest = num;
    }

    printf("\nThe largest number entered was %f\n", largest);

    return 0;
}
