/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[NUM_CARDS][2];
bool royal, straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool card_exists(int hand[NUM_CARDS][2], int rank, int suit);
void sort_hand(int hand[NUM_CARDS][2], int n);

int main(void)
{
    for(;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (int i = 0; i < NUM_CARDS; i++)
        for (int j = 0; j < 2; j++)
            hand[i][j] = 0;

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (cards_read > 0 && card_exists(hand, rank, suit))
            printf("Duplicate card; ignored.\n");
        else {
            hand[cards_read][0] = rank;
            hand[cards_read++][1] = suit;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;
    
    royal = false;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /*check for flush */
    for (int j = 1; j < NUM_CARDS; j++)
        if (hand[j - 1][1] != hand[j][1])
            flush = false;

    /* check for straight */
    sort_hand(hand, NUM_CARDS);
    for (int j = 1; j < NUM_CARDS; j++)
        if (hand[j - 1][0] != hand[j][0] - 1) {
            if (j == 4 && hand[4][0] == 12 && hand[3][0] == 3)
                break;
            straight = false;
            break;
        }

    if (straight)
        return;

    /* check for 4-of a kind, 3-of-a-kind, and pairs */
    int i = 0, j = 1, count = 0;

    while (j <= NUM_CARDS) {
        if (j < NUM_CARDS && hand[i][0] == hand[j][0]) {
            j++;
            count++;
        }
        else {
            switch (count) {
                case 3: four = true; break;
                case 2: three = true; break;
                case 1: pairs++; break;
            }
            i = j;
            j = i + 1;
            count = 0;
        }
    }
}

void print_result(void)
{
    if (straight && flush) {
        if (hand[0][0] == 8)
            printf("Royal flush");
        else 
            printf("Straight flush");
    }
    else if (four)         printf("Four of a kind");
    else if (three &&
            pairs == 1)    printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}

bool card_exists(int hand[NUM_CARDS][2], int rank, int suit)
{
    for (int j = 0; j < NUM_CARDS; j++)
        if (rank == hand[j][0] && suit == hand[j][1])
            return true;
    return false;
}

void sort_hand(int hand[NUM_CARDS][2], int n)
{
    if (n == 1) return;

    int index_max = 0, tmp, i;

    for (i = 1; i < n; i++)
        if (hand[i][0] > hand[index_max][0])
            index_max = i;

    tmp = hand[n - 1][0];
    hand[n - 1][0] = hand[index_max][0];
    hand[index_max][0] = tmp;
    sort_hand (hand, n - 1);

}
