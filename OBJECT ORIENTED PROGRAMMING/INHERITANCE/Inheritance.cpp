#include <iostream>
using namespace std;

class Human {
    public:
    string name;
    int age;
    int weight; 
};
class Student : public Human {
    public:
    int roll_number;
    int fees;
};
int main() {
   Student A;
   A.roll_number = 1;
   

}