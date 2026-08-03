#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle\n";
    }
};

int main() {
    Circle c;
    c.area();
}