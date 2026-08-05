#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string grade;


    // non parametric constructor
    Student() {
        name = "Unknown";
        age = 0;
    }
    // parametric constructor
    Student (string name , int age) {
        this->name = name;
        this->age = age;
    }

    // if the variable name or parameter name are not same you can use them without this keyword
    // Student (string a, int n, string g) {
    //     name = a;
    //     age = n;
    //     grade = g;


    // }
    
    // but if the variable name is same as the parameter name always use this keyhword

    // Student (string a, int n, string grade) {
    //     this->name = a;
    //     this->age = n;
    //     this->grade = grade;


    // }


    //inline constructor

    inline Student(string n, int a, string g):name(n), age(a), grade(g) {}

    void display() {
        cout << name << " " << age <<" "<< grade << endl;
    }
};

int main() {
    Student s1;
    s1.display();
    Student s2("vaibhav", 23, "A");
    s2.display();
    Student s3("vaibhav", 23);
    s3.display();
}