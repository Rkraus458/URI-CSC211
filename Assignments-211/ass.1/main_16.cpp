#include <iostream>
#include <iomanip>

int main(){

    double num,Cnum;
    char unit;

    std::cin >> num;
    std::cin >> unit;

    switch (unit) {
        case 'F':
            Cnum = (num - 32.0) * 5.0 / 9.0;
            std::cout << std::fixed << std::setprecision(4);
            std::cout << num << " degree(s) " << "F is equal to " << Cnum << " degree(s) C" << std::endl;
            break;
        case 'C':
            Cnum = (num * 9.0 / 5.0) + 32.0;
            std::cout << std::fixed << std::setprecision(4);
            std::cout << num << " degree(s) " << "C is equal to " << Cnum << " degree(s) F" << std::endl;
            break;
    }




    return 0;
}