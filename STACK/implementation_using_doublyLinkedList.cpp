#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    Node* top;
    int size;

public:
    Stack() {
        top = NULL;
        size = 0;
    }

    // Push into stack
    void push(int value) {
        Node* temp = new Node(value);
        temp->next = top;
        top = temp;
        size++;
        cout << value << " pushed into stack\n";
    }

    // Pop from stack
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }

        Node* temp = top;
        cout << temp->data << " popped from stack\n";

        top = top->next;
        delete temp;
        size--;
    }

    // Peek operation
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }

        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Get size
    int getSize() {
        return size;
    }

    // Display stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }

        Node* temp = top;

        cout << "Stack (Top -> Bottom): ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    s.pop();
    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    return 0;
}