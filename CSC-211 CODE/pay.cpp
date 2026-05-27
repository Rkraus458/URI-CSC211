#include <iostream>

int main(){

int hours, payment;
std::cin >> hours;
std::cin >> payment;
if(hours <= 40){ 
    payment = hours * 35;
    }
else{
   payment = (35 * 40) + ((hours - 40)* 50);

}
std::cout << "Your pay == " << payment;
    return 0;
}