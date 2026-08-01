#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;

    d.sound();
    d.bark();
}