#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, tmp;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);
    if (i1 > i2) {
        tmp = i1;
        i1 = i2;
        i2 = i1;
    }
    
    if (i3 > i4) {
        tmp = i3;
        i3 = i4;
        i4 = tmp;
    }

    if (i1 > i3) {
        tmp = i1;
        i1 = i3;
        i3 = tmp;
    }

    if (i2 > i4) {
        tmp = i2;
        i2 = i4;
        i4 = tmp;
    }

    printf("Largest: %d\n", i4);
    printf("Smallest: %d\n", i1);

    return 0;
}
