#include <iostream>

int main() {
    char ch;
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        int chars = ch - 'A' + 1;

        for (int i = 0; i < chars; i++) {
            
            for (int j = 0; j < chars - i - 1; j++) {
                std::cout << "  ";
            }

            
            for (int j = 0; j <= i; j++) {
                std::cout << static_cast<char>('A' + j);
                if (j < i) {
                    std::cout << " ";
                }
            }

            
            for (int j = i - 1; j >= 0; j--) {
                std::cout << " " << static_cast<char>('A' + j);
            }

            std::cout << std::endl;
        }
    } 

    return 0;
}
