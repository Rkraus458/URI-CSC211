#include <iostream>

int main() {

    int n;
    std::cin >> n;

    if (0 < n && n < 20) {
        for (int l = 1; l <= n; l++) {
            for (int i = 0; i < l; i++) {
               std::cout << "*";
            }
        std::cout << std::endl;
        }
        
    }



    return 0;
}