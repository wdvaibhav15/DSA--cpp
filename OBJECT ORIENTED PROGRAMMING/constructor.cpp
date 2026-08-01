#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    s1.display();
}