#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);

bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    char ch;

    for (;;) {
        if (play_game()) {
            printf("You win!\n\n");
            wins++;
        }
        else {
            printf("You lose!\n\n");
            losses++;
        }
        printf("Play again? ");
        scanf("%c", &ch);
        getchar();
        printf("\n");
        if (toupper(ch) != 'Y') {
            printf("Wins: %d  Losses: %d\n", wins, losses);
            break;
        }
    }
}

bool play_game(void)
{
    int roll, point;
    
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
    switch (roll) {
        case 7: case 11: return true;
        case 2: case 3: case 12: return false;
        default: point = roll; printf("Your point is %d\n", point); break;
    }

    for (;;) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == 7)
            return false;
        if (roll == point)
            return true;
    }

}

int roll_dice(void) 
{
    srand((unsigned) time(NULL));
    return rand() % 6 + rand() % 6 + 2;
}
