#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// emplemented by hashing
// contains only unique elements
// stores elemensts in any random order
// faster than set
// accessing of data in any random order
// does not allow duplicate elemenst
// time complexity in insertion, searching and deletion is O(1)
int main(){
    unordered_multiset<int> s;
    s.insert(10);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(50);
    for(auto itr = s.begin(); itr != s.end(); itr++){
        cout<<*itr<<" ";// 10 30 40 50 
    }
    return 0;
}