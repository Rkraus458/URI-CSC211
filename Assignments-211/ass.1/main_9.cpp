#include <iostream>

int main(){

int age;
std::cin >> age;

if (age < 16){
    std::cout << "Too young" << std::endl;
}
else if ( 16 <= age && age < 18) {
        std::cout << "Can drive" << std::endl;

}
else if (18 <= age && age < 21 ) {
        std::cout << "Can join the military" << std::endl;

}

else if ( age >= 21 ) {
        std::cout << "Can have a beer" << std::endl;

}
    return 0;
}