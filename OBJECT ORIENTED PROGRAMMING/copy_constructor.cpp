#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int roll_no;
    int age;
    
    Student(string n, int r, int a){
        name = n;
        roll_no = r;
        age = a;
    }
    //copy constructor
    Student(Student &s){
        name = s.name;
        roll_no = s.roll_no;
        age = s.age;
    }
    void display(){
        cout<<name<<" "<<roll_no<<" "<<age<<endl;
    }
};
int main(){
    Student s1("Vaibhav", 1, 540);
    s1.display();
    Student s2(s1);
    s2.display();
    Student s3(s1);
    s3.display();
    Student s4(s1);
    s4.display();
  }