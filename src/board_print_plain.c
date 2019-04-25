#include "board_print_plain.h"

void Print(char A[9][9])
{
    int i, j;
    for (i = 0; i < 9; i++) // цикл по строкам
    {
        for (j = 0; j < 9; j++) { // вывод одной строки (в цикле)
            printf(" %1c |", A[i][j]); // 4 символа на число
        }
        printf("\n"); // переход на другую строку
    }
}
