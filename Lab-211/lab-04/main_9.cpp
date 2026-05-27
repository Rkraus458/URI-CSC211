#include <iostream>

int main() {
    int height = 4;
    int width = 14;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j < i * 2) {
                std::cout << "\\";
            } else if (j >= width - i * 2) {
                std::cout << "!";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
