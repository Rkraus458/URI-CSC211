#include <iostream>
#include <string>

int main() {
    std::string myString;
    std::string lowercase;
    

    std::getline(std::cin, myString);
    
    bool pal = true;

    int length = myString.length();

    for(int i = 0; i < length; i++){
        char ch = + tolower(myString[i]);
        lowercase.push_back(ch);
    }
    
    for (int i = 0; i < length / 2; i++) {
        if (lowercase[i] != lowercase[length - 1 - i]) {
            pal = false;
            break;
        }
    }

    if (pal) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }


    return 0;
}