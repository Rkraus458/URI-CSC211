#include <iostream>
#include <string>
#include <cmath>
#include "Point2D.h"

int main()
{

    Point myPt(10, 5, 8);
    Point myPt2(3, 10, 15);
    Point myPt3;

    int myX = myPt.getX();

    std::cout << myX << std::endl;

    std::cout << myPt.toCord() << std::endl;

    myPt.setX(3);

    std::cout << myPt.toCord() << std::endl;

    std::cout << myPt.euDistance(myPt2) << std::endl;

return 0;
}