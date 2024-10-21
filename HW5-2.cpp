#include <iostream>
using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
            if (j < 2) cout << "| ";
        }
        if (i < 2) cout << "\n---------\n";
    }
    cout << "\n";
}

char checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }
    return ' ';
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void playerMove(char player) {
    int choice;
    bool validMove = false;
    
    while (!validMove) {
        cout << "玩家 " << player << " 的回合，選擇一個位置 (1~9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
            validMove = true;
        } else {
            cout << "無效的移動，請再試一次。\n";
        }
    }
}

int main() {
    char winner = ' ';
    char currentPlayer = 'X';
    
    while (winner == ' ') {
        
        displayBoard();
        playerMove(currentPlayer);
        winner = checkWinner();

        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }

    displayBoard();

    if (winner != ' ') {
        cout << "恭喜玩家 " << winner << " 獲勝！\n";
    } else {
        cout << "平局！\n";
    }

    return 0;
}