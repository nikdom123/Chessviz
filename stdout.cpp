#include <iostream>
#include <stdio.h>

using namespace std;

void Board(const int N)
{
    int i, j;
    // char A[N][N];
    // for (i = 0; i < N; i++) // цикл по строкам
    //   for (j = 1; j < N; j++) // цикл по столбцам строки (элементы строки)
    //  {
    //      A[i][j] = '\0'; // ввод A[i][j]
    //  }
    /*A[8][0] = '\0';
    A[0][0] = '8';
    A[1][0] = '7';
    A[2][0] = '6';
    A[3][0] = '5';
    A[4][0] = '4';
    A[5][0] = '3';
    A[6][0] = '2';
    A[7][0] = '1';
    A[8][1] = 'A';
    A[8][2] = 'b';
    A[8][3] = 'c';
    A[8][4] = 'd';
    A[8][5] = 'e';
    A[8][6] = 'f';
    A[8][7] = 'g';
    A[8][8] = 'h';
    A[0][1] = 'r';
    A[0][2] = 'n';
    A[0][3] = 'b';
    A[0][4] = 'q';
    A[0][5] = 'k';
    A[0][6] = 'b';
    A[0][7] = 'n';
    A[0][8] = 'r';
    A[7][1] = 'R';
    A[7][2] = 'N';
    A[7][3] = 'B';
    A[7][4] = 'Q';
    A[7][5] = 'K';
    A[7][6] = 'B';
    A[7][7] = 'N';
    A[7][8] = 'R';*/
    char A[N][N] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    /*for (i = 1; i < N; i += 5) // цикл по строкам
    {
        for (j = 1; j < N; j++) { // вывод одной строки (в цикле)
            if (i == 1)
                A[i][j] = 'p';
            else
                A[i][j] = 'P';
        }
    }*/
    for (i = 0; i < N; i++) // цикл по строкам
    {
        for (j = 0; j < N; j++) // вывод одной строки (в цикле)
            printf("%4c", A[i][j]); // 4 символа на число
        printf("\n"); // переход на другую строку
    }
}

int main()
{
	const int N = 9;
    Board(N);
    return 0;
}