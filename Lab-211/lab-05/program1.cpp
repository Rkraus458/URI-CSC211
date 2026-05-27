#include <iostream>

int add(int a, int b);
int mult(int a, int b);
int exp(int a, int b);

int main() {
    std::cout << exp(2, 6) << std::endl;
}

int exp(int a, int b) {
    //multiply a times a b times
    //return result
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int mult(int a, int b) {
    //add a to a sum, b times
    //return sum
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += a;
    }
    return sum;
}

int add(int a, int b) {
    //add a to b
    //return result
    int result = a + b;
    return result;
}