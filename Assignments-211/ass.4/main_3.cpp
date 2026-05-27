#include <iostream>

void moveCheck(int board[3][3], char move) {
    int empty_i = -1; // Initialize to an invalid value
    int empty_j = -1;

    // Find the position of the empty cell
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 0) {
                empty_i = i;
                empty_j = j;
            }
        }
    }

    switch (move) {
        case 'D':
            if (empty_i < 2) {
                // Swap the empty cell with the one below it
                int temp = board[empty_i][empty_j];
                board[empty_i][empty_j] = board[empty_i + 1][empty_j];
                board[empty_i + 1][empty_j] = temp;
            }
            break;

        case 'U':
            if (empty_i > 0) {
                // Swap the empty cell with the one above it
                int temp = board[empty_i][empty_j];
                board[empty_i][empty_j] = board[empty_i - 1][empty_j];
                board[empty_i - 1][empty_j] = temp;
            }
            break;

        case 'R':
            if (empty_j < 2) {
                // Swap the empty cell with the one to the right of it
                int temp = board[empty_i][empty_j];
                board[empty_i][empty_j] = board[empty_i][empty_j + 1];
                board[empty_i][empty_j + 1] = temp;
            }
            break;

        case 'L':
            if (empty_j > 0) {
                // Swap the empty cell with the one to the left of it
                int temp = board[empty_i][empty_j];
                board[empty_i][empty_j] = board[empty_i][empty_j - 1];
                board[empty_i][empty_j - 1] = temp;
            }
            break;

        default:
            return;
    }

    // // Print the board after each move
    // std::cout << "Board after move '" << move << "':" << std::endl;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         std::cout << board[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;
}

int main() {
    int board[3][3];

    // Input for the 3x3 board
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cin >> board[row][col];
        }
    }

    std::cin.ignore(); // Ignore the newline character left in the stream

    char moves[50]; // Assuming a maximum of 50 moves, adjust as needed
    std::cin.getline(moves, sizeof(moves));

    for (int i = 0; moves[i] != '\0'; i++) {
        char move = moves[i];
        moveCheck(board, move);
    }

    bool isCorrect = true;

    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (board[i][j] != 0 && board[i][j] < board[i - 1][j - 1]) {
                isCorrect = false;
                break;
            }
        }
        if (!isCorrect) {
            break; // Break out of the outer loop if incorrect
        }
    
    }

    if (isCorrect && board[2][2] == 0) {
        std::cout << "Solution is good!" << std::endl;
    } else {
        std::cout << "Wrong solution!" << std::endl;
    }
    
    return 0;
}
