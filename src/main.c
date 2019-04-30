#include "board.h"
#include "board_print_plain.h"
#include <stdio.h>

int main()
{
    int ch;
    char A[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    Print(A);
    while (1) {
        CheckMove(A);
        printf("End? 1/0: ");
        scanf("%d", &ch);
        if (ch == 1)
            break;
    }
    return 0;
}