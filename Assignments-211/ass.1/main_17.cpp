#include <iostream>

int main(){

    char grade;

    std::cin >> grade;

    if (grade == 'A'|| grade == 'a'){
        std::cout << "Excellent" << std::endl;
     }
    else if(grade == 'B'|| grade == 'b') {
        std::cout << "Good" << std::endl;
    }
    else if(grade == 'C'|| grade == 'c') {
        std::cout << "Average" << std::endl;
    }
    else if(grade == 'D'|| grade == 'd') {
        std::cout << "Poor" << std::endl;
    }
    else if(grade == 'F'|| grade == 'f') {
        std::cout << "Failing" << std::endl;
    }


    return 0;
}