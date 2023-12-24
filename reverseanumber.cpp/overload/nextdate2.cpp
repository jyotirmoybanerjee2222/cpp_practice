#include <iostream>

class Date1 {
public:
    Date1(int d, int m, int y) : day(d), month(m), year(y) {}

    void print() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }

    Date1& operator++() {
        
        day++;

        int max_days = days_in_month();
        if (day > max_days) {
            day = 1;
            month++;

            if (month > 12) {
                month = 1;
                year++;
            }
        }

        return *this;
    }

private:
    int day;
    int month;
    int year;

    int days_in_month() const {
        switch (month) {
            case 2:
                if (is_leap_year()) {
                    return 29;
                } else {
                    return 28;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }

    bool is_leap_year() const {
        if (year % 4 != 0) {
            return false;
        } else if (year % 100 != 0) {
            return true;
        } else if (year % 400 != 0) {
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    Date1 d(28,2, 2000);
    d.print();

    ++d;
    d.print();

    //++d;
   // d.print();

    return 0;
}
