#include <stdio.h>

#define N 5

int main(void)
{
    int grades[N][N];

    for (int i = 0; i < N; i++) {
        printf("Enter grades of student %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    int row_total = 0, column_total = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            row_total += grades[i][j];
        printf("Total score of student %d: %d\n", i + 1, row_total);
        printf("Average score of student %d: %.2f\n\n", 
                i + 1, (double)row_total / N);
        row_total = 0;
    }

    printf("\nColumn totals: ");
    for (int i = 0, low = 101, high = -1; i < N; i++) {
        for (int j = 0; j < N; j++) {
            column_total += grades[j][i];
            if (grades[j][i] > high)
                high = grades[j][i];
            else if (grades[j][i] < low)
                low = grades[j][i];
        }
        printf("The average score of quiz #%d is: %.2f\n", 
                i + 1, (double) column_total / N);
        printf("The highest score was: %d\n", high);
        printf("The lowest score was: %d\n\n", low);
        column_total = 0;
    }
    printf("\n");

    return 0;
}
