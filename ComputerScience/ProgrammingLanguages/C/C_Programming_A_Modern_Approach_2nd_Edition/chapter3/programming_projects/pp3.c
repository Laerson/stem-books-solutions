#include <stdio.h>

int main(void)
{
    printf("Enter ISBN: ");
    int gsi, group_id,publisher, item_number, check_digit;
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &publisher, &item_number,
            &check_digit);
    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
