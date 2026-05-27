#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a <= 20 && b <= 20 && c <= 20 && a <= b) {
        int len = a;
        bool inc = true;

        while (len <= b) {
            for (int i = 0; i < len; i++) {
                std::cout << "+";
            }
            std::cout << std::endl;

            if (len == b) {
                inc = false;
            }

            if (inc) {
                len += c;
                if (len > b) {
                    len = b;
                }
            } else {
                len -= c;
                if (len < a) {
                    len = a;
                }
            }
        }
    }

    return 0;
}
