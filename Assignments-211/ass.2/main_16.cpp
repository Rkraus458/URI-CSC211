#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool circPrime(int n) {
    int counter = 0, num = n;

    while (num > 0) {
        counter++;
        num /= 10;
    }

    int dig = n;
    
    for (int i = 0; i < counter; i++) {
        if (!isPrime(dig)) {
            return false;
        }
        
        int lastDigit = dig % 10;
        dig = (dig / 10) + (lastDigit * pow(10, counter - 1));
    }

    return true;
}

int main() {
    int n;
    std::cin >> n;

    if (n >= 0 && circPrime(n)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
