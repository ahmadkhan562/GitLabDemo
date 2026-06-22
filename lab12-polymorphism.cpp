#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = p * r * r" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

// New Derived class Triangle
class Triangle : public Shape {
public:
    void area() override {
        cout << "Area of Triangle = (base * height) / 2" << endl;
    }
};

int main() {
    Shape* s1;
    Shape* s2;
    Shape* s3;

    Circle c;
    Rectangle r;
    Triangle t;

    s1 = &c;
    s2 = &r;
    s3 = &t;

    s1->area();
    s2->area();
    s3->area();

    return 0;
}