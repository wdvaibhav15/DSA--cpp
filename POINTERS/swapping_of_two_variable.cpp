#include<iostream>
using namespace std;
int swapping(int &first , int &second){
    int temp = first;
    first = second;
    second = temp;
 }
 int main(){
    int first = 10 , second = 20 ;
    cout<< "number before swapping"<<endl;
    cout<< first<<""<<endl<<second<<""<<endl;
     swapping(first , second);
     cout<< "number after swapping"<<endl;
      cout<< first<<""<<endl<<second<<""<<endl;

    return 0;
 }