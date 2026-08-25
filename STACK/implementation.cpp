#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int size;
    int top;

public:
    // constructor
    Stack( int s) {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push operation
    void push(int value) {
        if (top == size - 1) {
            std::cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
        cout<<"pushed : "<<value<<endl;
    }

    // pop operation
    void pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return;
        }
        cout<<"popped : "<<arr[top]<<endl;
        top--;
    }

    // peek operation
    int peek() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top];
    }

    // check empty or not
    bool isEmpty() {

        return top < 0;
    }
    // check the size of stack
    int getSize() {
        return top + 1;
    }
};

int main() {

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    s.peek();
    s.getSize();
    return 0;
}