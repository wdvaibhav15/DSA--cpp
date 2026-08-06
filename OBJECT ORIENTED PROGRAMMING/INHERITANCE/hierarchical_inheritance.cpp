#include<iostream>
using namespace std;

class Man {
    public:
    string name;
    int hands;
    int legs;
    int age;
     
};

class Student : public Man{
    public:
    int roll_no;
    string grade;

    Student(string name, int roll_no, string grade){
        this->name = name;
        this->roll_no = roll_no;
        this->grade = grade;
    }
};

class Employee: public Man{
    public:
    string designation;
    int salary;

    Employee(string name, int age, string designation){
        this->name = name;
        this->age = age;
        this->designation = designation;
    }
};

class Teacher: public Man{
    public:
    string subject;
    string post;
    string college_name;

    Teacher(string name, int age,string subject, string post, string college_name){
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->post = post;
        this->college_name = college_name;
    }
};
int main(){
    Student s1("vaibhav",65,"A+");
    cout<<s1.name<<"--"<<s1.roll_no<<"--"<<s1.grade<<endl;

    Employee e1("vaibhav",22,"software developer");
    cout<<e1.name<<"--"<<e1.age<<"--"<<e1.designation<<endl;

    Teacher t1("vaibhav",22,"c++","teacher","RECS");
    cout<<t1.name<<"--"<<t1.age<<"--"<<t1.subject<<"--"<<t1.post<<"--"<<t1.college_name<<endl;
    

}