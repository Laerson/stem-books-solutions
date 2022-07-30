#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10

void generate_random_walk(char walk[10][10]);

void print_array(char walk[10][10]);

int main(void)
{
    int i, j;
    char grid[N][N];
    generate_random_walk(grid);
    print_array(grid); 

    return 0;
}

void generate_random_walk(char grid[10][10]) {
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            grid[i][j] = '.';

    srand((unsigned) time(NULL));
    int pos[2] = {0, 0};
    char letter;
    int move;
    bool visited[N][N] = {false};
    bool legal_move[4];

    for (letter = 'A'; letter <= 'Z'; letter++) {
        grid[pos[0]][pos[1]] = letter;
        visited[pos[0]][pos[1]] = true;
        //check the next legal moves
        legal_move[0] = (pos[0] == 0 || visited[pos[0] - 1][pos[1]])
            ? false : true;

        legal_move[1] = (pos[1] == N - 1 || visited[pos[0]][pos[1] + 1])
            ? false : true;

        legal_move[2] = (pos[0] == N - 1 || visited[pos[0] + 1][pos[1]])
            ? false : true;
        
        legal_move[3] = (pos[1] == 0 || visited[pos[0]][pos[1] - 1])
            ? false : true;


        if (legal_move[0] || legal_move[1] || 
                legal_move[2] || legal_move[3]) {
            for (;;) {
                move = rand() % 4;
                if(legal_move[move]) {
                    switch(move) {
                        case 0: pos[0]--; break;
                        case 1: pos[1]++; break;
                        case 2: pos[0]++; break;
                        case 3: pos[1]--; break;
                    }
                    break;
                }
            }
        }
        else
            break;
    }
}

void print_array(char walk[10][10]) 
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }
}
