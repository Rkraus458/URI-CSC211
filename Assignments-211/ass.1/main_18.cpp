#include <iostream>

int main(){

int day,month,year,century,yearpart,weekday;

std::cin >> day;
std::cin >> month;
std::cin >> year;

if (month == 1) {
    month = 13;
    year--;
}
else if (month == 2) {
    month = 14;
    year--;
}

century = year / 100;

yearpart = year % 100;

weekday = (day + (((month + 1) * 26) / 10) + yearpart + (yearpart / 4) + (century / 4) + (5 * century)) % 7;

if (weekday == 0){
    std::cout << "Saturday" << std::endl;
}
else if (weekday == 1){
    std::cout << "Sunday" << std::endl;
}

else if (weekday == 2){
    std::cout << "Monday" << std::endl;
}

else if (weekday == 3){
    std::cout << "Tuesday" << std::endl;
}
else if (weekday == 4){
    std::cout << "Wednesday" << std::endl;
}
else if (weekday == 5){
    std::cout << "Thursday" << std::endl;
}
else if (weekday == 6){
    std::cout << "Friday" << std::endl;
}

    return 0;
}