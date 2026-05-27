#include <iostream>
int plus_one(int x) {
    return x + 1;
}
int plus_two(int x) {
    return plus_one(x + 1);
}
int main() {
    int result = 0;
    result = plus_one(0);
    result = plus_two(result);
    std::cout << result;
}
