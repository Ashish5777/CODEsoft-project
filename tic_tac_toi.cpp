#include <iostream>
using namespace std;


void drawGrid(char grid[3][3]) {
    cout << "  1 2 3\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}


bool isGameOver(char grid[3][3]) {

    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != '-') {
            cout << "Player " << grid[i][0] << " wins!\n";
            return true;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j] && grid[0][j] != '-') {
            cout << "Player " << grid[0][j] << " wins!\n";
            return true;
        }
    }

    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != '-') {
        cout << "Player " << grid[0][0] << " wins!\n";
        return true;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != '-') {
        cout << "Player " << grid[0][2] << " wins!\n";
        return true;
    }

    bool isFull = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == '-') {
                isFull = false;
                break;
            }
        }
    }

    if (isFull) {
        cout << "It is a draw!\n";
        return true;
    }

    return false;
}

int main() {

    char grid[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    char player = 'X';
    int row, col;
    bool gameOver = false;
    drawGrid(grid);

    while (!gameOver) {

        cout << "Player " << player << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        row--;
        col--;

        if (grid[row][col] == '-') {
            grid[row][col] = player;
            drawGrid(grid);
            gameOver = isGameOver(grid);
            if (player == 'X') {
                player = 'O';
            } else {
                player = 'X';
            }
        } else {
            cout << "That position is taken. Try another one.\n";
        }
    }
    return 0;
}

