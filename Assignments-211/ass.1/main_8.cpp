#include <iostream>

int main(){

    int num;
    std::cin >> num;

    if( num % 10 == 9 || num % 10 == -9){
        std::cout << num << " is good" << std::endl;
    }
    else {
        std::cout << num << " is no good" << std::endl;
    }



    return 0;
}