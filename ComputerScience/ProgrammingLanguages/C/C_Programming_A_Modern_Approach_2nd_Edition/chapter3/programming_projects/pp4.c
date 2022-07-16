#include <stdio.h>

int main(void)
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int area, part1, part2;
    scanf("(%d) %d-%d", &area, &part1, &part2);
    printf("You entered %d.%d.%d\n", area, part1, part2);

    return 0;
}
