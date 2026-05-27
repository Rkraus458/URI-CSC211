#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> input;
    
    int num;

    // Read integers from a single line
    
    
    while (std::cin >> num) {
        
        input.push_back(num);
        
    }

    // Count the occurrences of the first integer in the input
    int count = 0;
    int first = input[0];
    for (int i = 0; i < input.size(); i++) {
        if (first == input[i]) {
            count++;
        }
    }

   std::cout << count << std::endl;

    return 0;
}
