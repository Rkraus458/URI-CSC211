#include <iostream>

int main(){

    int num1,num2,num3;

    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    int smallest = num1;

    if (smallest > num2) {
        smallest = num2;
    }
    if (smallest > num3) {
        smallest = num3;
        }
    std::cout << "The smallest number entered was " << smallest << std::endl;
    




}