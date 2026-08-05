#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int roll_no;
    int age;
    
    //constructor
    Student(string n, int r, int a){
        name = n;
        roll_no = r;
        age = a;
    }
    
    void display(){
        cout<<name<<" "<<roll_no<<" "<<age<<endl;
    }

    //destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
        cout<<name<<" "<<roll_no<<" "<<age<<endl;
    }
};
int main(){
    Student s1("Vaibhav", 1, 540);
    s1.display();
    
  }