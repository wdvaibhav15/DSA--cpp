// public specifiers in C++
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;
//     int roll_number;
//     string grade;
// };

// int main()
// {
//     Student s1;

//     s1.name = "Vaibhav";
//     s1.age = 20;
//     s1.roll_number = 1;
//     s1.grade = "A";

//     cout << "Name: " << s1.name << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Roll Number: " << s1.roll_number << endl;
//     cout << "Grade: " << s1.grade << endl;

//     return 0;
// }

//---------------------private specifiers in C++---------------------



#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll_number;
    string grade;
    public:
    void setName(string n){
        name = n;
    }
    public:
    void setAge(int a){
        age = a;
    }
};

int main()
{
    Student s1;

    s1.setName("Vaibhav");
    s1.setAge(20);

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}