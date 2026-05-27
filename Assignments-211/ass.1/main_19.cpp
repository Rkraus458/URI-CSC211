#include <iostream>

int main(){

int an1,an2,an3;

std::cin >> an1;
std::cin >> an2;
std::cin >> an3;

if (an1 < 90 && an2 < 90 && an3 < 90) {
    std::cout << "Acute" << std::endl;
}
else if (an1 == an2 + an3 || an2 == an1 + an3 || an3 == an1 + an2) {
    std::cout << "Right" << std::endl;
}
else if(an1 > 90 || an2 > 90 || an3 > 90){
    std::cout << "Obtuse" << std::endl;
}
else if (an1 + an2 + an3 != 180) {
    std::cout << "This triangle is impossible" << std::endl;
}


    return 0;
}