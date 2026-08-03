#include <iostream>
using namespace std;

class Student {
public:
    int age;

    void setAge(int age) {
        this->age = age;
    }

    void display() {
        cout << age;
    }
};

int main() {
    Student s;
    s.setAge(20);
    s.display();
}