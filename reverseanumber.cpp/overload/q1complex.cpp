#include <iostream>

class complex {
public:
    complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

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
        std::cout << real << " + " << imag << "i" << std::endl;
    }

private:
    double real;
    double imag;
};

int main() {
    complex a(2, 3);
    complex b(4, 5);
    complex c(6, 7);
    complex d(8, 9);

    complex result = a - b * c + d;
    result.print();

    return 0;
}
