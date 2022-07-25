#include <stdio.h>

#define N 5

int main(void)
{
    int square[N][N];

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    int row_total = 0, column_total = 0;
    printf("Row totals: ");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            row_total += square[i][j];
        printf("%d ", row_total);
        row_total = 0;
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            column_total += square[j][i];
        printf("%d ", column_total);
        column_total = 0;
    }
    printf("\n");

    return 0;
}
