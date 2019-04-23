#include "board.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool check;
    char board[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                        {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    string s;
    ifstream file("mnt /c/ccccc/chessviz/bin/game.txt");

    while (getline(file, s)) {
        check = Do2Steps(board, s);
        if (check == 0) {
            cout << "WRONG INPUT, PROBLEM IN STRING: " << s << endl;
            break;
        }
    }
    file.close();
}