#include <iostream>
#include <string>

int main() {
    std::string myString;
    std::getline(std::cin, myString);

    int length = myString.length();
    int count = 0;

    for (int i = 0; i < length; i++) {
        char let = myString[i];
        bool isUnique = true;

        for (int j = 0; j < i; j++) {
            if (let == myString[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
