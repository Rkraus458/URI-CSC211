#include <iostream>

int main(){
    std::string myString;
    std::string reverse;
    std::getline(std::cin, myString);
    int length = 0;

    while (myString[length] != '\0'){
        length++;
    }
    
    for(int i = (length - 1); i >= 0; i--) {
        reverse += myString[i];
    }

    std::cout << reverse << std::endl;

    
    
    
    
    return 0;
}