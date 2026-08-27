#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    stack<string> s;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        s.push(x);
    }

    string newElement;
    cout << "Enter the element to insert at bottom: ";
    cin >> newElement;

    stack<string> temp;

    // Move all elements to temp
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    // Insert at bottom
    s.push(newElement);

    // Restore original elements
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    cout << "\nStack from Top to Bottom:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}