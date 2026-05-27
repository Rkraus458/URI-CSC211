#include <iostream>

int main() {
    int n;
    
    std::cin >> n;

    if (n < 0 || n >= 30) {
        std::cout << "Can't handle this" << std::endl;
    } else {
        long long sum = 1;
        for (int i = 2; i <= n; i++) {
            sum *= i;

            if (sum > 2147483647) {
                std::cout << "Can't handle this" << std::endl;
                return 0;
            }
        }

        std::cout << sum;
    }

    return 0;
}