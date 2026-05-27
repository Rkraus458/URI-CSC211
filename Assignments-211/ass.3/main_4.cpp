#include <iostream>
#include <vector>

int main() {
    int n;
    int length = 0;
    std::vector<int> list;

    while (std::cin >> n) {
        list.push_back(n);
        length++;
    }

    bool sort = true;

    for (int i = 1; i < length; i++) {
        if (list[i] > list[i - 1]) {
            sort = false;
            break;
        }
    }

    if (sort) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not Sorted" << std::endl;
    }

    

    return 0;
}
