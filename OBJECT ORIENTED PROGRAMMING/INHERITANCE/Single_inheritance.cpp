#include<iostream>
using namespace std;

// parent class
class Student{
    protected:
    string name;
    int age;
    

    public:
    void work(){
        cout<<"i am working"<<endl;
    }
};

// child class
class CSEStudent : public Student {
    
    int roll_no;
    string department;
    string hostel_name;
    //constructor
    public:
    CSEStudent (string name, int age, int roll_no, string department, string hostel_name) {
        this->name = name;
        this->roll_no = roll_no;
        this->department = department;
        this->age = age;
        this->hostel_name = hostel_name;
    };
};

int main(){
    CSEStudent s1("Vaibhav", 20, 1, "CSE", "Vishwakarma Hostel");
    s1.work();
 }