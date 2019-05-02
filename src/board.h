#ifndef BOARD_H
#define BOARD_H
#include <stdio.h>
#include <stdlib.h>

void CheckMove(char A[8][8]);
int WPawn(int row1, int col1, int row2, int col2);
int BPawn(int row1, int col1, int row2, int col2);
void Move(char A[8][8], int col1, int row1, int col2, int row2);

#endif