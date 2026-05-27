#ifndef DATE_H
#define DATE_H

class Date {
    private:
        int month;
        int year;
        int day;

    public:
        
        void set(int m, int d, int y);

        void addYears(int someYear);
        void addMonths(int someMonth);
        void addDay(int someDay);
        
        void print();
};

#ifndef



