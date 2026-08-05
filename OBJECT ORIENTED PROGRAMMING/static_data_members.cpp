#include<iostream>
using namespace std;
class Costomer {
    string name;
    int account_number;
     int balence;

     // declaration of static data members
    static int total_costomer;

     public:
     Costomer(string name, int account_number, int balance){
         this->name = name;
         this->account_number = account_number;
         this->balence = balance;
         total_costomer++;
     }
     void display(){
        cout<<name<<" "<<account_number<<" "<<balence <<" "<<total_costomer<<endl;
     }
     void display_total(){
        cout<<total_costomer<<endl;
     }
};

//initialization of static data members
// use reolution operator for globally access (::)
int Costomer :: total_costomer = 0 ;


int main(){
    Costomer c1("vaibhav", 1, 1000);
    // c1.display();
    Costomer c2("patel",  2, 3000);
    // c2.display();
    Costomer c3("rohit",  5, 334540);
    // c3.display();
    c2.display_total();
}