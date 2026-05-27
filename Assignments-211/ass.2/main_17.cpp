#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    int move;

    while (std::cin >> move) {
        if (x <= 8 && x >= 1 && y <= 8 && y >= 1) {
            switch(move) {
                case 0:
                    x = x + 2;
                    y = y + 1;
                    break;
                case 1:
                    x = x + 2;
                    y = y - 1;
                    break;
                case 2:
                    x = x + 1;
                    y = y - 2;
                    break;
                case 3:
                    x = x - 1;
                    y = y - 2;
                    break;
                case 4:
                    x = x - 2;
                    y = y - 1;
                    break;
                case 5:
                    x = x - 2;
                    y = y + 1;
                    break;
                case 6:
                    x = x - 1;
                    y = y + 2;
                    break;
                case 7:
                    x = x + 1;
                    y = y + 2;
                    break;
            }
        }
        if (x > 8 || x < 1 || y > 8 || y < 1) {
            std::cout << "Invalid sequence" << std::endl;
            return 0;
        }
    }
    std::cout << x << " " << y << std::endl;


    return 0;
}