#include <iostream>
#include <string>
#include <vector>


int getPrime(int n) {
   
    

    if (n > 0 && n < 1000000000) {
        bool v = true; 

        if (n == 1) {
            v = false;
        } else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    v = false;
                    break;
                }
            }
        }

        if (v) {std::cout << "True" << std::endl;} 
        else {std::cout << "False" << std::endl;}
    }
}

std::vector<int> getCyclicPermutations(int num) {
    std::vector<int> cyclicPermutations;
    std::string numStr = std::to_string(num);
    int numLen = numStr.length();
    
    for (int i = 0; i < numLen; ++i) {
        std::string rotatedNumStr = numStr.substr(i) + numStr.substr(0, i);
        int rotatedNum = std::stoi(rotatedNumStr);
        cyclicPermutations.push_back(rotatedNum);
    }
    
    return cyclicPermutations;
}

int main() {
   int n;
   std::cin >> n;

    return 0;
}
