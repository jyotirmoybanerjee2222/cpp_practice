#include <iostream>
using namespace std;

class complex {
    double real, imag;
public:
    complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    complex operator+(const complex& other) const {
        return complex(real + other.real, imag + other.imag);
    }
    
    complex operator-(const complex& other) const {
        return complex(real - other.real, imag - other.imag);
    }
    
    complex operator*(const complex& other) const {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        return complex(r, i);
    }
    
    void print() const {
        cout << "(" << real << "+ " << (imag) << ")" << endl;
    }
};

int main() {
    complex a(1, 2);
    complex b(3, 4);
    complex c(5, 6);
    complex d(7, 8);
    
    complex result = a - b * c + d;
    
    result.print();
    
    return 0;
}
