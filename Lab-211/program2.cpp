#include <iostream>

int main(){
    int speed;
    std::cin >> speed;

    if (speed < 50) {
        std::cout << "Safe" << std::endl;
    }
    else if(speed > 50 && speed < 55) {
        std::cout << "Pushing your luck" << std::endl;
    }
    else if( speed > 55) {
        std::cout << "Speeding" << std::endl;
    }
    return 0;
}