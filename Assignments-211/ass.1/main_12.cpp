#include <iostream>
#include <iomanip>

int main() {
    double num1, num2, num3, average, sum;

    
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    sum = num1 + num2 + num3;

    average = sum / 3;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average << std::endl;

    return 0;
}
