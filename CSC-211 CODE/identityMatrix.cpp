#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    int matrix[n][n];

    for (int i=0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if ( i== j){
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }

            std::cout << matrix[i][j] << " ";


            
        }
        std::cout << std::endl;
    }


    



    return 0;
}