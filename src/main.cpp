#include "board.h"
#include "board_print_plain.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    int check;
    FILE* mf;
    char* estr;
    char board[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                        {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    char str[50];
    mf = fopen("/mnt/c/ccccc/chessviz/bin/game.txt", "r");
    if (mf == NULL) {
        printf("ошибка\n");
        return -1;
    } else
        printf("выполнено\n");

    while (true) {
        estr = fgets(str, sizeof(str), mf);
        if (estr == NULL) {
            if (feof(mf) != 0) {
                printf("\nЧтение файла закончено\n");
                break;
            } else {
                printf("\nОшибка чтения из файла\n");
                break;
            }
        }
        int len = strlen(estr);
        cout << len << endl;
        if (len == 16) {
            check = DoStepPawnW(board, str);
            if (check == 0) {
                cout << "WRONG INPUT, PROBLEM IN STRING: " << str << endl;
                break;
            }
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << board[i][j] << ' ';
                }
                cout << endl;
            }
            // PrintBoard(board);
            check = DoStepPawnB(board, str);
            if (check == 0) {
                cout << "WRONG INPUT, PROBLEM IN STRING: " << str << endl;
                break;
            }
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << board[i][j] << ' ';
                }
                cout << endl;
            }
            // PrintBoard(board);
        } else if (len == 18) {
            check = DoStepOtherW(board, str);
            if (check == 0) {
                cout << "WRONG INPUT, PROBLEM IN STRING: " << str << endl;
                break;
            }
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << board[i][j] << ' ';
                }
                cout << endl;
            }
            // PrintBoard(board);
            check = DoStepOtherB(board, str);
            if (check == 0) {
                cout << "WRONG INPUT, PROBLEM IN STRING: " << str << endl;
                break;
            }
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout << board[i][j] << ' ';
                }
                cout << endl;
            }
            // PrintBoard(board);
        }
    }
    printf("Закрытие файла : ");
    if (fclose(mf) == EOF)
        printf("ошибка\n");
    else
        printf("выполнено\n");
    fclose(mf);
    return 0;
}