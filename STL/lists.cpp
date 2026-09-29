#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// emplemented using a doubly linked list
// list is a doubly linked list
// list is a dynamic array
// list is a sequence container
// list is a container adaptor
int main(){
    list<int>l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_front(10);
    l1.push_back(3);
    l1.push_front(30);
    l1.push_back(4);
    l1.push_front(20);
    l1.push_back(5);
    l1.pop_back();
    l1.push_back(6);
    l1.push_back(7);
    l1.pop_front();
    l1.push_back(8);
    int size = l1.size();
    bool empty = l1.empty();
    int front = l1.front();
    int back = l1.back();

    cout<<size<<endl;
    cout<<empty<<endl;
    cout<<front<<endl;
    cout<<back<<endl;
    for(auto it = l1.begin(); it != l1.end(); it++){
        cout<<*it<<" ";//10 20 30 1 2 3 4 5 6 7 8
    }
   
}