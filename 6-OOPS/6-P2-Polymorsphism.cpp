#include <iostream>

// Polymorphism Example

// Compile-time Polymorphism (Method Overloading)
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Run-time Polymorphism (Method Overriding)
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};

// Operator Overloading Example

class Complex {
public:
    double real, imag;

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
};

int main() {
    // Polymorphism Example
    std::cout << add(3, 5) << std::endl;           // Calls int add(int a, int b)
    std::cout << add(3.5, 2.7) << std::endl;       // Calls double add(double a, double b)

    Shape* shape = new Circle();
    shape->draw();  // Calls draw() based on actual type (Circle)

    shape = new Square();
    shape->draw();  // Calls draw() based on actual type (Square)

    // Operator Overloading Example
    Complex a{1.0, 2.0};
    Complex b{2.0, 3.0};
    Complex c = a + b;  // Calls the custom '+' operator

    std::cout << "Result of complex addition: " << c.real << " + " << c.imag << "i" << std::endl;

    return 0;
}
