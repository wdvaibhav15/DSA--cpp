#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// it stores data in key value pair
// key should be unique
// value can be duplicate
// emplemented by red black tree/AVL tree
// insertion, searching and deletion is O(logn)
// accessing of data in any random order
int main(){
    map<int, int>m;
    m.insert({1, 10}); // done
    m.insert({2, 20}); // done
    m.insert({2, 30}); // X

    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;

}