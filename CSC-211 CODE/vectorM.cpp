#include <iostream>

void printMatrix(int m1[][10], int n){

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << m1[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void addMatrix(int m1[][10], int m2[][10], int n){

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << m1[i][j] + m2[i][j] << " ";
        }
        std::cout << std::endl;
    }

}




int main(){


    int M1[10][10] = {{1, 2, 3}, {4, 5, 6}, {7,8,9} };
    int M2[10][10] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    printMatrix(M1, 3);
    
    std::cout << std::endl;
    
    printMatrix(M2, 3);

    std::cout << std::endl;

    addMatrix(M1, M2, 3);

    return 0;
}