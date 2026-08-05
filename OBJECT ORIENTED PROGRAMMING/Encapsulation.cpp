#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setage(int m) {
        if(m>0 && m<=100){
            age = m;
        }
        else{
            cout<<"Invalid age";
        }
        
    }

    int getage() {
        return age;
    }
};

int main() {
    Student s;

    s.setage(95);

    cout << s.getage();

    return 0;
}