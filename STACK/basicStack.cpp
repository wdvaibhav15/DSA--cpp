#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Access the top element
    std::cout << "Top element: " << s.top() << "\n"; // Outputs 30

    // Pop the top element
    s.pop();
    std::cout << "Top element after pop: " << s.top() << "\n"; // Outputs 20

    // Stack size and emptiness check
    std::cout << "Stack size: " << s.size() << "\n";
    std::cout << "Is empty: " << (s.empty() ? "Yes" : "No") << "\n";

    return 0;
}