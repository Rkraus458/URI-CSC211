#include <iostream>
#include <string>

int main() {
    std::string myString;

    std::getline(std::cin, myString);

    std::string result = "";
    int length = myString.length();

    
    result.push_back(myString[0]); 

    for (int i = 1; i < length; i++) {
        char let = myString[i];

        
        if (let != myString[i - 1]) {
            result.push_back(let);
        }
    }
    

   
    std::cout << result << std::endl;

    return 0;
}
