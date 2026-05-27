#include <iostream>

int main(){
    int num;
    std::cin >> num;

    for(int i = 2; i < num/2; i++){
        if(num % i == 0) {
            std::cout << "Prime" << std::endl;
        }
    
        else {
        std::cout << "Not prime" << std::endl;
        }

    }

    return 0;
}