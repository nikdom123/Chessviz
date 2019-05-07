#ifndef BOARD_H
#define BOARD_H
#include <stdio.h>
#include <stdlib.h>

void CheckMove(char A[8][8]);
int WPawn(char step, int row1, int col1, int row2, int col2);
int BPawn(char step, int row1, int col1, int row2, int col2);
int King(char A[8][8], int row1, int col1, int row2, int col2);
int Queen(char A[8][8], int row1, int col1, int row2, int col2);
int Rook(char A[8][8], int row1, int col1, int row2, int col2);
int Bishop(char A[8][8], int row1, int col1, int row2, int col2);
int Knight(char A[8][8], int row1, int col1, int row2, int col2);
void Move(
        char A[8][8],
        char step,
        char color,
        int col1,
        int row1,
        int col2,
        int row2);

#endif