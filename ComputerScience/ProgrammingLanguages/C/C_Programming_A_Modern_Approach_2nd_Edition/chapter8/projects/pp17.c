#include <stdio.h>

int main(void)
{
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n], row = 0, col = (n / 2);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            square[i][j] = 0;

    for (int i = 1; i <= n * n; i++) {
        if (square[row][col] > 0) {
            row = (row + 2) % n;
            if (col == 0)
                col = n - 1;
            else
                col--;
        }

        square[row][col] = i;
        if (row == 0)
            row = n - 1;
        else
            row--;
        col = (col + 1) % n;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("   %2d", square[i][j]);
        putchar('\n');
    }

    return 0;
}
