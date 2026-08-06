#include <iostream>
#include <string>
using namespace std;


class A {
public:
    string grade;
    string phone;
};


class B {
public:
    string name;
    string department;
    int age;
    int roll_no;
};


class C : public A, public B {
public:
    string hostel;

    C( string name, int roll_no, int age, string grade, string department, string hostel, string phone) {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;
        this->grade = grade;
        this->department = department;
        this->hostel = hostel;
        this->phone = phone;
    }
};


class D : public B {
public:
    string carName;
    int salary;

    D( string name, int age, string department, int salary, string carName ) {
        this->name = name;
        this->age = age;
        this->department = department;
        this->salary = salary;
        this->carName = carName;
    }
};


class E : public B {
public:
    int workingDays;
    string designation;

    E( string name, int age, int workingDays, string designation ) {
        this->name = name;
        this->age = age;
        this->workingDays = workingDays;
        this->designation = designation;
    }
};

int main() {
    C obj1( "abc", 65, 22, "A+", "CSE", "BH2", "9999999999");

    cout << "Student details:" << endl;
    cout << obj1.name << " "<< obj1.roll_no << " " << obj1.age << " " << obj1.grade << " "<< obj1.department << " "<< obj1.hostel << " "<< obj1.phone << endl;

    D obj2( "akt", 65, "CSE", 250000, "Swift");

    cout << "\nTeacher details:" << endl;
    cout << obj2.name << " " << obj2.age << " " << obj2.department << " " << obj2.salary << " "<< obj2.carName << endl;

    E obj3( "Ramlal", 45, 4,"Peon");

    cout << "\nEmployee details:" << endl;
    cout << obj3.name << " " << obj3.age << " " << obj3.workingDays << " "<< obj3.designation << endl;

   
}