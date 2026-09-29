#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// implemensted using class
// pair is used to store key value pair
// pair<type1 , type2> name;
// pair<string,int> p1;
// p1.first = "abc";
int main(){
    pair<int,int> p1;
    p1.first = 10;
    p1.second = 20;

    pair<string,int> p2;
    p2.first = "abc";
    p2.second = 20;

    // pair inside another pair
    // name age weight
    pair<pair<string,int>,int> p3;
    p3.first.first = "abc";
    p3.first.second = 20;
    p3.second = 20;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second<<endl;
    return 0;
}