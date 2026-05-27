#include <iostream>
#include <iomanip>

int main() 
{
    int n,k;

    bool test = 0;
    
    while (!test) {
        std::cin >> n;
        std::cin >> k;
        if (n > -15 && n < 15 && k > 0 && k < 10){
            test = 1;
        }
    }

    double sum = 1;

    for (int i = 1; i <=k; i++) {
        sum *= n;
    }

    std::cout << std::fixed << std::setprecision(0);
    std::cout << sum << std::endl;

    return 0;
}