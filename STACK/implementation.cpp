#include <iostream>

class Stack {
private:
    static const int MAX = 1000;
    int topIndex;
    int arr[MAX];

public:
    Stack() : topIndex(-1) {}

    bool push(int x) {
        if (topIndex >= (MAX - 1)) {
            std::cout << "Stack Overflow\n";
            return false;
        }
        arr[++topIndex] = x;
        return true;
    }

    int pop() {
        if (topIndex < 0) {
            std::cout << "Stack Underflow\n";
            return -1;
        }
        return arr[topIndex--];
    }

    int peek() const {
        if (topIndex < 0) {
            std::cout << "Stack is Empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() const {
        return (topIndex < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Popped: " << s.pop() << "\n";
    std::cout << "Top: " << s.peek() << "\n";
    std::cout << "Is Empty: " << (s.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}