#include "board.h"
#include "board_print_plain.h"

void CheckMove(char A[8][8])
{
    char W[6];
    char B[6];
    scanf("%s", W);
    scanf("%s", B);
    int Wcol1 = W[0] - 'a';
    int Wcol2 = W[3] - 'a';
    int Wrow1 = 56 - W[1];
    int Wrow2 = 56 - W[4];
    int Bcol1 = B[0] - 'a';
    int Bcol2 = B[3] - 'a';
    int Brow1 = 56 - B[1];
    int Brow2 = 56 - B[4];

    if (Wcol1 < 8 && Wrow1 < 8 && Wcol2 < 8 && Wrow2 < 8 && Bcol1 < 8
        && Brow1 < 8 && Bcol2 < 8 && Brow2 < 8) {
        Move(A, Wcol1, Wrow1, Wcol2, Wrow2);
        Move(A, Bcol1, Brow1, Bcol2, Brow2);
        Print(A);
    } else {
        printf("Error 404\n");
    }
}

void Move(char A[8][8], int col1, int row1, int col2, int row2)
{
    A[row2][col2] = A[row1][col1];
    A[row1][col1] = ' ';
}