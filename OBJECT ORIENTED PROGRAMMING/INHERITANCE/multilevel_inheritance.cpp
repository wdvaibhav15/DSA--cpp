#include<iostream>
using namespace std;

class A{
    public:
    int a;
};
class B:public A{
    public:
    int b;
};
class C:public B{
    public:
    int c;
};
    

int main(){
    C obj1;
    obj1.a = 10;
    obj1.b = 20;
    obj1.c = 30;
    cout<<"a = "<<obj1.a<<endl;
    cout<<"b = "<<obj1.b<<endl;
    cout<<"c = "<<obj1.c<<endl;
    return 0;
}