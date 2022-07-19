#include <stdio.h>

int main(void)
{
    int grade;
    char letter;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid value for grade\n");
        return 1;
    }

    grade /= 10;
    switch (grade) {
        case 10: case 9: letter = 'A'; break;
        case 8:          letter = 'B'; break;
        case 7:          letter = 'C'; break;
        case 6:          letter = 'D'; break;
        default:         letter = 'F'; break;

    }

    printf("Letter grade: %c\n", letter);

    return 0;
}
