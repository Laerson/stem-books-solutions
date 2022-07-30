#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);

void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char square[n][n];
    
    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char square[n][n]) 
{
    int row = 0, col = (n / 2);

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
}

void print_magic_square(int n, char square[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("   %2d", square[i][j]);
        putchar('\n');
    }
}


