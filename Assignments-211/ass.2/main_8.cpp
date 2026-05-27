#include <iostream>

int main(){
    int n;
    std::cin >> n;

    if(n % 2 == 1 && n>0 && n<10) {
        
        for (int rows = 0; rows < n; rows++) {
            for (int col = 0; col < n; col++) {
                if (col == rows || col == n - rows -1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }



    }
    else {
        std::cout << "Sorry, not odd" << std::endl;
    }


    return 0;
}