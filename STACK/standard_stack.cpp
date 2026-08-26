#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push
    s.push(10);
    s.push(20);
    s.push(30);

    // Top element
    cout << "Top: " << s.top() << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Pop
    s.pop();

    cout << "After pop, Top: " << s.top() << endl;

    // Check empty
    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}