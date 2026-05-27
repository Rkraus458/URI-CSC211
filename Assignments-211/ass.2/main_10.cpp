#include <iostream>
#include <cmath>

int main() {
    int month = 0;
    double loan, inte, pay;

    std::cin >> loan;

    std::cin >> inte;

    std::cin >> pay;

    // Loan calculation
    while (loan > 0) {
        loan += loan * inte;
        loan -= pay;
        month++;
    }

    // Output
    std::cout << month << std::endl;
    
    return 0;
}
