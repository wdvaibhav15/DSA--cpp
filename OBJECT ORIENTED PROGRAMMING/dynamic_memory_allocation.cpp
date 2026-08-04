#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_number;
    string grade;
};
int main(){
    Student *S = new Student;
    S->name = "Vaibhav"; // (*S).name("Vaibhav");
    S->age = 20; // (*S).age(20);
    S->roll_number = 1; // (*S).roll_number(1);
    S->grade = "A"; // (*S).grade("A");
    cout<<"S->name: "<<S->name<<endl;
    cout<<"S->age: "<<S->age<<endl;
    cout<<"S->roll_number: "<<S->roll_number<<endl;
    cout<<"S->grade: "<<S->grade<<endl;
    return 0;
} 