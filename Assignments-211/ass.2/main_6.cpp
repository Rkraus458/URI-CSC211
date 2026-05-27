#include <iostream>

int main(){
    int n,s;

    std::cin >> n;
    std::cin >> s;

    if ( n >= 1 && n <= 10000 && s >= 1 && s <= n) {
        int calc = 0;
        for (int i = 0; i < s; i++) {
            calc += n - i;
        
        }
        std::cout << calc << std::endl;
    }






    return 0;
}