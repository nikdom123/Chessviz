#include "board_print_plain.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
using std::string;

int main()
{
    char A[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    Board(A);
    string str;
    cin >> str;
    // char sym1, sym2;
    // sym1 = str[0];
    // sym2 = str[1];
    int a = str[0] - str[1] + 1;
    cout << a << endl;
    int b = str[3] - str[2];
    cout << A[b][a];
    return 0;
}