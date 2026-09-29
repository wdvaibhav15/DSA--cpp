#include<iostream>
using namespace std;

// class for maxheap
class MaxHeap{
    int *arr;
    int size;
    int total_size;
    public:
    MaxHeap(int value){
        arr = new int[value];
        size = 0;
        total_size = value;
    }

    // insert in max heap
    void insert(int value){
        // overflow condition
        if(size == total_size){
            cout<<"Heap overflow\n";
            return;
        }
        arr[size] = value;
        int index = size;
        size++;

        // compare element with its parent
        while(index != 0 && arr[index] > arr[(index-1)/2]){
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" inserted\n";
    }

    // print all the element of the heap 
    void print(){
        for(int i = 0 ; i<size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
 MaxHeap h1(10);
 h1.insert(10);
 h1.insert(20);
 h1.insert(30);
 h1.insert(40);
 h1.insert(50);
 h1.insert(60);
 h1.insert(70);
 h1.insert(80);
 h1.insert(90);
 h1.insert(100);
 h1.insert(110);
 cout<<"The elements of the heap are: ";
 h1.print();
}