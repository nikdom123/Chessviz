#include "board_print_plain.h"

void Print(char A[8][8])
{
    printf("\t     a  b  c  d  e  f  g  h \n");
    printf("\t     ----------------------\n");
    for (int i = 0; i < 8; i++) // цикл по строкам
    {
        printf("\t %d |", 8 - i);
        for (int j = 0; j < 8; j++) { // вывод одной строки (в цикле)
            printf(" %1c ", A[i][j]); // 4 символа на число
        }
        printf("| %d\n", 8 - i); // переход на другую строку
    }
    printf("\t     ----------------------\n");
    printf("\t     a  b  c  d  e  f  g  h \n");
}
