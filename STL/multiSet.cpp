#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// it is similar to set
// but it can have duplicate elemenst
// it is stored in sorted order
// objects of class can be stored
// class elements object in sets

int main(){
// multi set can have contain duplicate elemenst but in sorted order
    multiset<int>m;
    m.insert(10);
    m.insert(10);
    m.insert(10);
    m.insert(20);
    m.insert(20);
    m.insert(30);
    m.insert(30);
    m.insert(30);
    m.insert(40);
    m.insert(40);
    m.insert(40);
    m.insert(40);

    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout<<*itr<<" ";// 10 20 30 40 
    }
    return 0;
}