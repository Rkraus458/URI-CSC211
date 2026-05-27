#include <iostream>
#include <string>

int main(){
    std::string myString;
    std::getline(std::cin, myString);

    

    int length = myString.length();


    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += int(myString[i]);
    }
   
    std::cout << sum << std::endl;



    return 0;
}