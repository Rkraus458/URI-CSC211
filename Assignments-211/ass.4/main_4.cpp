#include <iostream>
#include <vector>
#include <cmath>

void getInput(std::vector<double>& xCoords, std::vector<double>& yCoords, std::vector<char>& labels, int& k) {
    int numPoints;
    std::cin >> numPoints >> k;

    for (int i = 0; i < numPoints; i++) {
        double x, y;
        char label;
        std::cin >> x >> y >> label;
        xCoords.push_back(x);
        yCoords.push_back(y);
        labels.push_back(label);
    }

    double x, y;
    std::cin >> x >> y;
    xCoords.push_back(x);
    yCoords.push_back(y);
}

void calculateDistances(const std::vector<double>& xCoords, const std::vector<double>& yCoords, std::vector<double>& distances) {
    for (size_t i = 0; i < xCoords.size() - 1; i++) {
        double xDistance = std::abs(xCoords.back() - xCoords[i]);
        double yDistance = std::abs(yCoords.back() - yCoords[i]);
        double totalDistance = std::sqrt(xDistance * xDistance + yDistance * yDistance);
        distances.push_back(totalDistance);
    }
}

void sortVectors(std::vector<double>& xCoords, std::vector<double>& yCoords, std::vector<char>& labels, std::vector<double>& distances) {
    for (size_t i = 0; i < distances.size() - 1; i++) {
        for (size_t j = 0; j < distances.size() - i - 1; j++) {
            if (distances[j] > distances[j + 1]) {
                std::swap(distances[j], distances[j + 1]);
                std::swap(xCoords[j], xCoords[j + 1]);
                std::swap(yCoords[j], yCoords[j + 1]);
                std::swap(labels[j], labels[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<double> xCoords, yCoords, distances;
    std::vector<char> labels;
    int k;
    getInput(xCoords, yCoords, labels, k);

    calculateDistances(xCoords, yCoords, distances);

    sortVectors(xCoords, yCoords, labels, distances);

    int countRed = 0;
    int countBlue = 0;

    for (size_t i = 0; i < k; i++) {
        if (labels[i] == 'R') {
            countRed++;
        }
        if (labels[i] == 'B') {
            countBlue++;
        }
    }

    if (countRed > countBlue) {
        std::cout << "R" << std::endl;
    } else {
        std::cout << "B" << std::endl;
    }

    return 0;
}
