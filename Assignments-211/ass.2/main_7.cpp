#include <iostream>
#include <string>
#include <cstring>

int main(){

    unsigned int n;
    std::cin >> n;

    if (n >= 1 && n <= 4294967295) {
        std::string str = std::to_string(n);
        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
            int num = str[i] - '0';
            if (num % 2 == 0){
                sum += num;
            }

        }
        std::cout << sum << std::endl;
    }

    return 0;
}