#include <iostream>
#include <vector>
#include <cmath>

int main(){
    std::vector<int> points;
    int temp;
    while (std::cin >> temp){
        points.push_back(temp);
    }

    int largestDistance = 0;

    for (int i = 0; i < points.size(); i += 2) {
        for (int j = i + 2; j < points.size(); j += 2){
            int dx = points[i] - points[j];
            int dy = points[i+1] - points[j+1];
            int distance = std::sqrt(dx * dx * dy * dy);
            if (distance > largestDistance) {
                largestDistance = distance;
            }
        }
    }



    std::cout << largestDistance << std::endl;
    return 0;
}