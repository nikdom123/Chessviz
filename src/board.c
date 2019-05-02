#include "board.h"
#include "board_print_plain.h"

void CheckMove(char A[8][8])
{
    char W[7];
    scanf("%s", W);
    int Wcol1 = W[1] - 'a'; // Pe2-e3 Q
    int Wcol2 = W[4] - 'a';
    int Wrow1 = 56 - W[2];
    int Wrow2 = 56 - W[5];

    char B[7];
    scanf("%s", B);
    int Bcol1 = B[1] - 'a';
    int Bcol2 = B[4] - 'a';
    int Brow1 = 56 - B[2];
    int Brow2 = 56 - B[5];

    if (Wcol1 >= 8 || Wrow1 >= 8 || Wcol2 >= 8 || Wrow2 >= 8 || Bcol1 >= 8
        || Brow1 >= 8 || Bcol2 >= 8 || Brow2 >= 8) {
        printf("Exit the board\n");
        exit(1);
    }
    switch (W[0]) {
    case 'P':
        if (WPawn(Wrow1, Wcol1, Wrow2, Wcol2)) {
            Move(A, Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;

    default:
        exit(1);
    }
    switch (B[0]) {
    case 'P':
        if (BPawn(Brow1, Bcol1, Brow2, Bcol2)) {
            Move(A, Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    default:
        exit(1);
    }

    Print(A);
}

int WPawn(int row1, int col1, int row2, int col2)
{
    int flag;
    if ((row1 - row2 <= 2) && (col1 == col2) && (row1 > row2)) {
        flag = 1;
    } else {
        flag = 0;
    }
    if ((row1 != 6) && (row1 - row2 == 2)) {
        flag = 0;
    }
    return flag;
}

int BPawn(int row1, int col1, int row2, int col2)
{
    int flag;
    if ((row2 - row1 <= 2) && (col1 == col2) && (row2 > row1)) {
        flag = 1;
    } else {
        flag = 0;
    }
    if ((row1 != 1) && (row2 - row1 == 2)) {
        flag = 0;
    }
    return flag;
}

void Move(char A[8][8], int col1, int row1, int col2, int row2)
{
    A[row2][col2] = A[row1][col1];
    A[row1][col1] = ' ';
}