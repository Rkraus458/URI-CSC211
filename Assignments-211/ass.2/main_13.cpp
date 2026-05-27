#include <iostream>
#include <cmath>

int main() {
    int number, sum = 0, digitCount = 0;
    std::cin >> number;
    int temp = number;

    
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    temp = number;

    
    while (temp > 0) {
        int digit = temp % 10;
        sum += std::pow(digit, digitCount);
        temp /= 10;
    }

    if (sum == number) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
