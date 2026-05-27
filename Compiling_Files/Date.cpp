#include <iostream>
#include "Date.h"

// Implement the following public methods for the class date
// add_years, which adds a number of years to the current date
// add_months, which adds a number of months to the current date
// add_days, which adds a number of days to the current date



void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::addYears(int someYear){
    year += someYear;
}

void Date::addMonths(int someMonth){
    month += someMonth;
}

void Date::addDay(int someDay){
   day  += someDay;
}

int main(){

    Date today;

    today.set(11, 07, 2023);
    today.print();


    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}