#include "board.h"
#include "board_print_plain.h"

void Move(char A[9][9])
{
    fflush(stdin);
    char B[12];
    fgets(B, 12, stdin);

    int Wcfrom = B[0] - 'a' + 1;
    int Wcto = B[3] - 'a' + 1;
    int Wrfrom = 56 - B[1];
    int Wrto = 56 - B[4];
    A[Wrto][Wcto] = A[Wrfrom][Wcfrom];
    A[Wrfrom][Wcfrom] = ' ';
    int Bcfrom = B[6] - 'a' + 1; // e2-e4 c7-c5
    int Bcto = B[9] - 'a' + 1;
    int Brfrom = 56 - B[7];
    int Brto = 56 - B[10];
    A[Brto][Bcto] = A[Brfrom][Bcfrom];
    A[Brfrom][Bcfrom] = ' ';
}