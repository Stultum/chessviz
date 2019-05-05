#include <iostream>
#include <string>

using namespace std;

int DoStepPawnW(char (*board)[9], char* s)
{
    int x, y, x1, y1, i;
    char step = s[3];
    step = s[3];
    if (step == 'a')
        x = 1;
    else if (step == 'b')
        x = 2;
    else if (step == 'c')
        x = 3;
    else if (step == 'd')
        x = 4;
    else if (step == 'e')
        x = 5;
    else if (step == 'f')
        x = 6;
    else if (step == 'g')
        x = 7;
    else if (step == 'h')
        x = 8;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }
    step = s[4];
    if (step == '1')
        y = 7;
    else if (step == '2')
        y = 6;
    else if (step == '3')
        y = 5;
    else if (step == '4')
        y = 4;
    else if (step == '5')
        y = 3;
    else if (step == '6')
        y = 2;
    else if (step == '7')
        y = 1;
    else if (step == '8')
        y = 0;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    step = s[7];
    if (step == '1')
        y1 = 7;
    else if (step == '2')
        y1 = 6;
    else if (step == '3')
        y1 = 5;
    else if (step == '4')
        y1 = 4;
    else if (step == '5')
        y1 = 3;
    else if (step == '6')
        y1 = 2;
    else if (step == '7')
        y1 = 1;
    else if (step == '8')
        y1 = 0;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    step = s[6];
    if (step == 'a')
        x1 = 1;
    else if (step == 'b')
        x1 = 2;
    else if (step == 'c')
        x1 = 3;
    else if (step == 'd')
        x1 = 4;
    else if (step == 'e')
        x1 = 5;
    else if (step == 'f')
        x1 = 6;
    else if (step == 'g')
        x1 = 7;
    else if (step == 'h')
        x1 = 8;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    cout << endl;

    for (i = 0; i <= 7; i++) {
        cout << s[i];
    }
    cout << endl << endl;

    if (board[y][x] != 'P') {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (board[y][x] == ' ') {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (s[5] != 'x' && x1 != x) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (s[5] == 'x' && x1 == x) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (y1 >= y) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (s[5] == 'x') {
        if (board[y1][x1] != ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    } else if (s[5] == '-') {
        if (board[y1][x1] == ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    } else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    return 1;
}

////////////////////////////

int DoStepPawnB(char (*board)[9], char* s)
{
    int x, y, x1, y1, i;
    char step = s[9];
    if (step == 'a')
        x = 1;
    else if (step == 'b')
        x = 2;
    else if (step == 'c')
        x = 3;
    else if (step == 'd')
        x = 4;
    else if (step == 'e')
        x = 5;
    else if (step == 'f')
        x = 6;
    else if (step == 'g')
        x = 7;
    else if (step == 'h')
        x = 8;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    step = s[10];
    if (step == '1')
        y = 7;
    else if (step == '2')
        y = 6;
    else if (step == '3')
        y = 5;
    else if (step == '4')
        y = 4;
    else if (step == '5')
        y = 3;
    else if (step == '6')
        y = 2;
    else if (step == '7')
        y = 1;
    else if (step == '8')
        y = 0;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    step = s[13];
    if (step == '1')
        y1 = 7;
    else if (step == '2')
        y1 = 6;
    else if (step == '3')
        y1 = 5;
    else if (step == '4')
        y1 = 4;
    else if (step == '5')
        y1 = 3;
    else if (step == '6')
        y1 = 2;
    else if (step == '7')
        y1 = 1;
    else if (step == '8')
        y1 = 0;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    step = s[12];
    if (step == 'a')
        x1 = 1;
    else if (step == 'b')
        x1 = 2;
    else if (step == 'c')
        x1 = 3;
    else if (step == 'd')
        x1 = 4;
    else if (step == 'e')
        x1 = 5;
    else if (step == 'f')
        x1 = 6;
    else if (step == 'g')
        x1 = 7;
    else if (step == 'h')
        x1 = 8;
    else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    cout << endl;

    cout << s[0] << s[1] << ' ';

    for (i = 9; i <= 13; i++) {
        cout << s[i];
    }
    cout << endl << endl;

    if (board[y][x] == ' ') {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (board[y][x] != 'p') {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (s[11] != 'x' && x1 != x) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }
    if (s[11] == 'x' && x1 == x) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (y1 <= y) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (s[11] == 'x') {
        if (board[y1][x1] != ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    } else if (s[11] == '-') {
        if (board[y1][x1] == ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    } else {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    return 1;
}

//////////////////////////////////////////////////////////////////////////////////////////////

int DoStepOtherW(char (*board)[9], char* s)
{
    char figure;
    int x, y, x1, y1, i;
    char step = s[4];
    step = s[4];
    figure = s[3];
    cout << "'" << figure << "'" << endl;
    if (figure != 'R' && figure != 'B' && figure != 'N' && figure != 'Q'
        && figure != 'K') {
        cout << "WRONG INPUTfig1" << endl;
        return 0;
    }
    if (step == 'a')
        x = 1;
    else if (step == 'b')
        x = 2;
    else if (step == 'c')
        x = 3;
    else if (step == 'd')
        x = 4;
    else if (step == 'e')
        x = 5;
    else if (step == 'f')
        x = 6;
    else if (step == 'g')
        x = 7;
    else if (step == 'h')
        x = 8;
    else {
        cout << "WRONG INPUT1" << endl;
        return 0;
    }
    step = s[5];
    if (step == '1')
        y = 7;
    else if (step == '2')
        y = 6;
    else if (step == '3')
        y = 5;
    else if (step == '4')
        y = 4;
    else if (step == '5')
        y = 3;
    else if (step == '6')
        y = 2;
    else if (step == '7')
        y = 1;
    else if (step == '8')
        y = 0;
    else {
        cout << "WRONG INPUT2" << endl;
        return 0;
    }

    step = s[8];
    if (step == '1')
        y1 = 7;
    else if (step == '2')
        y1 = 6;
    else if (step == '3')
        y1 = 5;
    else if (step == '4')
        y1 = 4;
    else if (step == '5')
        y1 = 3;
    else if (step == '6')
        y1 = 2;
    else if (step == '7')
        y1 = 1;
    else if (step == '8')
        y1 = 0;
    else {
        cout << "WRONG INPUT3" << endl;
        return 0;
    }

    step = s[7];
    if (step == 'a')
        x1 = 1;
    else if (step == 'b')
        x1 = 2;
    else if (step == 'c')
        x1 = 3;
    else if (step == 'd')
        x1 = 4;
    else if (step == 'e')
        x1 = 5;
    else if (step == 'f')
        x1 = 6;
    else if (step == 'g')
        x1 = 7;
    else if (step == 'h')
        x1 = 8;
    else {
        cout << "WRONG INPUT4" << endl;
        return 0;
    }

    cout << endl;

    for (i = 0; i <= 8; i++) {
        cout << s[i];
    }
    cout << endl << endl;

    if (board[y][x] != figure) {
        cout << "WRONG INPUT" << endl;
        return 0;
    }

    if (figure == 'B') {
        if (x1 == x || y1 == y) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    if (figure == 'R') {
        if (x1 != x || y1 != y) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    if (figure == 'K') {
        if (abs(x1 - x) != 1 || abs(y1 - y) != 1) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    if (board[y][x] == ' ') {
        cout << "WRONG INPUT5" << endl;
        return 0;
    }

    //   if (s[6] != 'x' && x1 != x) {
    //     cout << "WRONG INPUT6" << endl;
    //   return 0;
    //}

    if (s[6] == 'x' && x1 == x) {
        cout << "WRONG INPUT7" << endl;
        return 0;
    }

    if (y1 >= y) {
        cout << "WRONG INPUT8" << endl;
        return 0;
    }

    if (s[6] == 'x') {
        if (board[y1][x1] != ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT9" << endl;
            return 0;
        }
    } else if (s[6] == '-') {
        if (board[y1][x1] == ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT10" << endl;
            return 0;
        }
    } else {
        cout << "WRONG INPUT11" << endl;
        return 0;
    }

    return 1;
}

////////////////////////////

int DoStepOtherB(char (*board)[9], char* s)
{
    char figure;
    int x, y, x1, y1, i;
    char step = s[11];
    figure = s[10];
    if (figure == 'B')
        figure = 'b';
    if (figure == 'R')
        figure = 'r';
    if (figure == 'N')
        figure = 'n';
    if (figure == 'Q')
        figure = 'q';
    if (figure == 'K')
        figure = 'k';
    cout << "'" << figure << "'" << endl;
    if (figure != 'r' && figure != 'b' && figure != 'n' && figure != 'q'
        && figure != 'k') {
        cout << "WRONG INPUT1" << endl;
        return 0;
    }
    if (step == 'a')
        x = 1;
    else if (step == 'b')
        x = 2;
    else if (step == 'c')
        x = 3;
    else if (step == 'd')
        x = 4;
    else if (step == 'e')
        x = 5;
    else if (step == 'f')
        x = 6;
    else if (step == 'g')
        x = 7;
    else if (step == 'h')
        x = 8;
    else {
        cout << "WRONG INPUT1" << endl;
        return 0;
    }

    step = s[12];
    if (step == '1')
        y = 7;
    else if (step == '2')
        y = 6;
    else if (step == '3')
        y = 5;
    else if (step == '4')
        y = 4;
    else if (step == '5')
        y = 3;
    else if (step == '6')
        y = 2;
    else if (step == '7')
        y = 1;
    else if (step == '8')
        y = 0;
    else {
        cout << "WRONG INPUT2" << endl;
        return 0;
    }

    step = s[15];
    if (step == '1')
        y1 = 7;
    else if (step == '2')
        y1 = 6;
    else if (step == '3')
        y1 = 5;
    else if (step == '4')
        y1 = 4;
    else if (step == '5')
        y1 = 3;
    else if (step == '6')
        y1 = 2;
    else if (step == '7')
        y1 = 1;
    else if (step == '8')
        y1 = 0;
    else {
        cout << "WRONG INPUT3" << endl;
        return 0;
    }

    step = s[14];
    if (step == 'a')
        x1 = 1;
    else if (step == 'b')
        x1 = 2;
    else if (step == 'c')
        x1 = 3;
    else if (step == 'd')
        x1 = 4;
    else if (step == 'e')
        x1 = 5;
    else if (step == 'f')
        x1 = 6;
    else if (step == 'g')
        x1 = 7;
    else if (step == 'h')
        x1 = 8;
    else {
        cout << "WRONG INPUT4" << endl;
        return 0;
    }

    cout << endl;

    cout << s[0] << s[1] << ' ';

    for (i = 10; i <= 15; i++) {
        cout << s[i];
    }
    cout << endl << endl;

    if (board[y][x] == ' ') {
        cout << "WRONG INPUT5" << endl;
        return 0;
    }

    if (board[y][x] != figure) {
        cout << "WRONG INPUT6" << endl;
        return 0;
    }

    if (figure == 'b') {
        if (x1 == x || y1 == y) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    if (figure == 'r') {
        if (x1 != x || y1 != y) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    if (figure == 'k') {
        if (abs(x1 - x) != 1 || abs(y1 - y) != 1) {
            cout << "WRONG INPUT" << endl;
            return 0;
        }
    }

    //  if (s[13] != 'x' && x1 != x) {
    //     cout << "WRONG INPUT7" << endl;
    //    return 0;
    //}
    if (s[13] == 'x' && x1 == x) {
        cout << "WRONG INPUT8" << endl;
        return 0;
    }

    if (y1 <= y) {
        cout << "WRONG INPUT9" << endl;
        return 0;
    }

    if (s[13] == 'x') {
        if (board[y1][x1] != ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT10" << endl;
            return 0;
        }
    } else if (s[13] == '-') {
        if (board[y1][x1] == ' ') {
            board[y1][x1] = board[y][x];
            board[y][x] = ' ';
        } else {
            cout << "WRONG INPUT11" << endl;
            return 0;
        }
    } else {
        cout << "WRONG INPUT12" << endl;
        return 0;
    }

    return 1;
}
