#include <iostream>

int main(){

int a,b,d;


char c;

std::cin >> a;
std::cin >> b;
std::cin >> c;

switch (c) {
    case '+':
        d = a + b;
        std::cout << a << " + " << b << " = " << d << std::endl;
        break;
    
    case '-':
        d = a - b;
        std::cout << a << " - " << b << " = " << d << std::endl;
        break;
    
    case '/':
        d = a / b;
        std::cout << a << " / " << b << " = " << d << std::endl;
        break;

    case '*':
        d = a * b;
        std::cout << a << " * " << b << " = " << d << std::endl;
        break;

}

    return 0;
}