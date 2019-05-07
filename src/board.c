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
        if (WPawn(W[3], Wrow1, Wcol1, Wrow2, Wcol2)
            && (A[Wrow1][Wcol1] == 'P')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'B':
        if (Bishop(A, Wrow1, Wcol1, Wrow2, Wcol2) && (A[Wrow1][Wcol1] == 'B')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'R':
        if (Rook(A, Wrow1, Wcol1, Wrow2, Wcol2) && (A[Wrow1][Wcol1] == 'R')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'N':
        if (Knight(A, Wrow1, Wcol1, Wrow2, Wcol2) && (A[Wrow1][Wcol1] == 'N')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'Q':
        if (Queen(A, Wrow1, Wcol1, Wrow2, Wcol2) && (A[Wrow1][Wcol1] == 'Q')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'K':
        if (King(A, Wrow1, Wcol1, Wrow2, Wcol2) && (A[Wrow1][Wcol1] == 'K')) {
            Move(A, W[3], 'w', Wcol1, Wrow1, Wcol2, Wrow2);
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
        if (BPawn(B[3], Brow1, Bcol1, Brow2, Bcol2)
            && (A[Brow1][Bcol1] == 'p')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'B':
        if (Bishop(A, Brow1, Bcol1, Brow2, Bcol2) && (A[Brow1][Bcol1] == 'b')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'R':
        if (Rook(A, Brow1, Bcol1, Brow2, Bcol2) && (A[Brow1][Bcol1] == 'r')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'N':
        if (Knight(A, Brow1, Bcol1, Brow2, Bcol2) && (A[Brow1][Bcol1] == 'n')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'Q':
        if (Queen(A, Brow1, Bcol1, Brow2, Bcol2) && (A[Brow1][Bcol1] == 'q')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
        } else {
            printf("Error of step\n");
            exit(1);
        }
        break;
    case 'K':
        if (King(A, Brow1, Bcol1, Brow2, Bcol2) && (A[Brow1][Bcol1] == 'k')) {
            Move(A, B[3], 'b', Bcol1, Brow1, Bcol2, Brow2);
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

int King(char A[8][8], int row1, int col1, int row2, int col2)
{
    int flag;
    if ((labs(col1 - col2) <= 1) && (labs(row1 - row2) <= 1)) {
        flag = 1;
    } else {
        flag = 0;
    }
    return flag;
}

int Queen(char A[8][8], int row1, int col1, int row2, int col2)
{
    int flag;
    if (Rook(A, row1, col1, row2, col2) || Bishop(A, row1, col1, row2, col2)) {
        flag = 1;
    } else {
        flag = 0;
    }
    return flag;
}

int Knight(char A[8][8], int row1, int col1, int row2, int col2)
{
    int flag;
    if ((labs(row1 - row2) == 2 && labs(col1 - col2) == 1)
        || (labs(col1 - col2) == 2 && labs(row1 - row2) == 1)) {
        flag = 1;
    } else {
        flag = 0;
    }
    return flag;
}

int Rook(char A[8][8], int row1, int col1, int row2, int col2)
{
    int flag, i, j;
    if ((row1 == row2 && (labs(col1 - col2) != 0))
        || (col1 == col2 && labs(row1 - row2) != 0)) {
        if (labs(col1 - col2) != 0)
            j = labs(col1 - col2);
        else
            j = labs(row1 - row2);
        flag = 1;
    } else {
        flag = 0;
    }
    for (i = 1; i < j; i++) {
        if (row1 == row2 && col1 > col2) {
            if (A[row1][--col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (row1 == row2 && col1 < col2) {
            if (A[row1][++col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (col1 == col2 && row1 > row2) {
            if (A[--row1][col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (col1 == col2 && row1 < row2) {
            if (A[++row1][col1] != ' ') {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int Bishop(char A[8][8], int row1, int col1, int row2, int col2)
{
    int flag, i, j = labs(row1 - row2);
    if ((labs(row1 - row2) == labs(col1 - col2)) && row1 != row2
        && col1 != col2) {
        flag = 1;
    } else {
        flag = 0;
    }
    for (i = 1; i < j; i++) {
        if (row2 > row1 && col2 > col1) {
            if (A[++row1][++col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (row2 > row1 && col2 < col1) {
            if (A[++row1][--col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (row2 < row1 && col2 > col1) {
            if (A[--row1][++col1] != ' ') {
                flag = 0;
                break;
            }
        } else if (row2 < row1 && col2 < col1) {
            if (A[--row1][--col1] != ' ') {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int WPawn(char step, int row1, int col1, int row2, int col2)
{
    int flag;
    if (step == '-') {
        if ((row1 - row2 <= 2) && (col1 == col2) && (row1 > row2)) {
            flag = 1;
        } else {
            flag = 0;
        }
        if ((row1 != 6) && (row1 - row2 == 2)) {
            flag = 0;
        }
    }
    if (step == 'x') {
        printf("%c\n", step);
        if ((row1 - row2 == 1) && (labs(col1 - col2) == 1)) {
            flag = 1;
        } else {
            flag = 0;
        }
    }
    return flag;
}

int BPawn(char step, int row1, int col1, int row2, int col2)
{
    int flag;
    if (step == '-') {
        if ((row2 - row1 <= 2) && (col1 == col2) && (row2 > row1)) {
            flag = 1;
        } else {
            flag = 0;
        }
        if ((row1 != 1) && (row2 - row1 == 2)) {
            flag = 0;
        }
    }
    if (step == 'x') {
        if ((row2 - row1 == 1) && (labs(col1 - col2) == 1) && (row2 > row1)) {
            flag = 1;
        } else {
            flag = 0;
        }
    }
    return flag;
}

void Move(
        char A[8][8],
        char step,
        char color,
        int col1,
        int row1,
        int col2,
        int row2)
{
    int flag;
    switch (color) {
    case 'w':
        if (A[row2][col2] == 'P' || A[row2][col2] == 'Q' || A[row2][col2] == 'K'
            || A[row2][col2] == 'N' || A[row2][col2] == 'R'
            || A[row2][col2] == 'B')
            flag = 0;
        else
            flag = 1;
        break;
    case 'b':
        if (A[row2][col2] == 'p' || A[row2][col2] == 'q' || A[row2][col2] == 'k'
            || A[row2][col2] == 'n' || A[row2][col2] == 'r'
            || A[row2][col2] == 'b')
            flag = 0;
        else
            flag = 1;
        break;
    }
    if (flag) {
        switch (step) {
        case '-':
            if (A[row2][col2] != '.') {
                printf("Error busy\n");
                exit(1);
            }
            A[row2][col2] = A[row1][col1];
            A[row1][col1] = '.';
            break;
        case 'x':
            A[row2][col2] = A[row1][col1];
            A[row1][col1] = '.';
            break;
        default:
            printf("Step is false\n");
            exit(1);
        }
    } else {
        printf("Step error\n");
        exit(1);
    }
}