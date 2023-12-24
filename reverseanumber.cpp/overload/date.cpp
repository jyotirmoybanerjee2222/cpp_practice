#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2021) : day(d), month(m), year(y) {}

    
    Date operator++() {
        
        day++;

        
        if (day > days_in_month(month, year)) {
            day = 1;
            month++;

            
            if (month > 12) {
                month = 1;
                year++;
            }
        }

        
        return *this;
    }

    
    int days_in_month(int m, int y) {
        if (m == 2) {
            if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    
    void print() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d(30, 4, 2021);
    cout << "Current date: ";
    d.print();
    
    
    ++d;
    cout << "Next date: ";
    d.print();

    return 0;
}
