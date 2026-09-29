#include<iostream>
using namespace std;

// class for maxheap
// left 2*i + 1
// right 2*i + 2
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

    // max heapify
    void MaxHeapify(int index){
        // largest will store the index of the 
        // element which is  greater between 
        // parent, left and right child
        int largest = index;

        int left = 2*index + 1;
        int right = 2*index + 2;

        if(left<size && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest = right;
        }
        if(largest != index){
            swap(arr[index],arr[largest]);
            MaxHeapify(largest);
        }
    }

    // delete the root
    void Delete(){
        if(size == 0){
            cout<<"Heap underflow\n";
            return;
        }

        cout<<arr[0]<<" deleted\n";
        arr[0] = arr[size-1];
        size--;

        if(size == 0){
            return;
        }
        MaxHeapify(0);
    }

};
int main(){
 MaxHeap h1(10);
 h1.insert(10);
 h1.insert(20);
 h1.insert(30);
 h1.Delete();
 h1.insert(40);
 h1.insert(50);
 h1.insert(60);
 h1.insert(70);
 h1.insert(80);
 h1.Delete();
 h1.insert(90);
 h1.insert(100);
 h1.insert(110);
 cout<<"The elements of the heap are: ";
 h1.print();
 
 return 0;
}