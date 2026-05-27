#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string myString;
    std::getline(std::cin, myString);

    std::string domain;

    int length = myString.length();
    int startPos = -1;
    int endPos = -1;

    
    for (int i = 0; i < length - 1; i++) {
        if (myString[i] == '/' && myString[i + 1] == '/') {
            startPos = i + 2;
            break;
        }
    }

    if (startPos != -1) {
        
        for (int i = startPos; i < length; i++) {
            if (myString[i] == '/') {
                endPos = i;
                break;
            }
        }
    }

    if (endPos != -1) {
        domain = myString.substr(startPos, endPos - startPos);
    } else {
        
        domain = myString.substr(startPos);
    }

    
    for (int i = 0; i < domain.length(); i++) {
        if (domain[i] == ':') {
            domain.erase(i, domain.length());
        }
    }

     for (int i = 0; i < domain.length(); i++) {
        domain[i] = std::tolower(domain[i]);
    }


    std::cout << domain << std::endl;

    return 0;
}
