#include<iostream>
using namespace std;

class A{
    public:
    int n;
    void show(){
        cout<<"A";
    }
};
class B{
    public:
    string name;
    void show(){
        cout<<"B";
    }
};
class C:public A,public B{
    public:
    
    C (int n,string name){
        this->n=n;
        this->name=name;

    }
    void show(){
        cout<<"C"<<endl;
        cout<<n<<" "<<name;
    }
};
int main(){
  C obj1(10,"abc");
  obj1.show();
}