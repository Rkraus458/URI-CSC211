#include <iostream>

int main(){

    int low,high,num;

    std::cin >> num;
    std::cin >> low;
    std::cin >> high;

    if(low <= num <= high) {
        std::cout << "In range" << std::endl;
    }

    else {
         std::cout << "Not in range" << std::endl;
    }





    return 0;
}