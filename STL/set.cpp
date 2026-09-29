#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// emplemented by AVL tree
// it stores unique elemst
// duplicate elements are not allowed
// elements are stored in sorted order
// objects of class can be stored

// class elements object in sets
class Person{
    public:
    string name;
    int age;
    bool operator < (const Person &p) const{
        return this->age<p.age;
    }
};
int main(){
    set<int>s;
    // if you declare set<int>s; then it will be sorted in ascending order
    // but if you declare set<int,greater<int>>s; then it will be sorted in descending order
    // set<int,greater<int>>s;
    s.insert(10);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(50);

    // searching a elemement in set
    auto it=s.find(30);
    if(it!=s.end()){
        cout<<"Element found\n";
    }
    else{
        cout<<"Element not found\n";
    }

    // accessing using class
    set<Person>s1;
    Person p1;

    p1.age=20;
    p1.name="abc";

    Person p2;
    p2.age=30;
    p2.name="xyz"; 
    
    Person p3;
    p3.age=40;
    p3.name="pqr"; 

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);

    // print all set elements
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;

    // print all set elements
    for(auto itr=s1.begin();itr!=s1.end();itr++){
        cout<<itr->name<<" "<<itr->age<<endl;
    }
}