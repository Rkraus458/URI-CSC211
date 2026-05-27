#include <iostream>


// Function to check the vertical validity of the Sudoku board
int vert_check(int board[9][9]) {
    for (int col = 0; col < 9; col++){
        for (int row = 0; row < 9; row++){  
            for (int nextRow = row + 1; nextRow < 9; nextRow++) {
                if (board[row][col] == board[nextRow][col]) {
                    return 0;  
                }
            }
        }
    }
    
    return 1;
}

int horiz_check(int board[9][9]){
    for (int row = 0; row < 9; row++){
        for (int col = 0; col < 9; col++){
            for (int nextCol = col + 1; nextCol < 9; nextCol++){
                if (board[row][col] == board[row][nextCol]){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int box_check(int board[9][9]) {
    for (int boxC = 0; boxC < 9; boxC += 3) {
        for (int boxR = 0; boxR < 9; boxR += 3) {
            int sum = 0;  // Reset sum to 0 for each new 3x3 box
            for (int row = boxC; row < boxC + 3; row++) {
                for (int col = boxR; col < boxR + 3; col++) {
                    sum = sum + board[row][col];
                }
            }
            if (sum != 45) {
                return 0; 
            }
        }
    }
    return 1; 
}


int main() {
    int board[9][9];

    // Input Sudoku matrix
    
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            std::cin >> board[row][col];
        }
    }

    int vertResult = vert_check(board);
    int horizResult = horiz_check(board);
    int boxResult = box_check(board);
    
    if (vertResult && horizResult && boxResult){
        std::cout << "Solution is good!" << std::endl;
    }
    else {
        std::cout << "Wrong solution!" << std::endl;
        }
    
    
    

    return 0;
}
