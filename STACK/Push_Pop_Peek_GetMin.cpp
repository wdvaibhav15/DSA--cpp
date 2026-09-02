#include <iostream>
#include <stack>
using namespace std;

class SpecialStack {
    stack<int> s1;
    stack<int> s2;

public:

    // Constructor
    SpecialStack() {
    }

    // Push an element
    void push(int x) {
        s1.push(x);

        if (s2.empty()) {
            s2.push(x);
        }
        else if (x < s2.top()) {
            s2.push(x);
        }
        else {
            s2.push(s2.top());
        }
    }

    // Remove top element
    void pop() {
        if (!s1.empty()) {
            s1.pop();
            s2.pop();
        }
    }

    // Return top element
    int peek() {
        if (s1.empty()) {
            return -1;
        }

        return s1.top();
    }

    // Check if stack is empty
    bool isEmpty() {
        return s1.empty();
    }

    // Return minimum element
    int getMin() {
        if (s2.empty()) {
            return -1;
        }

        return s2.top();
    }
};

int main() {

    SpecialStack st;

    st.push(5);
    st.push(3);
    st.push(7);
    st.push(2);
    st.push(4);

    cout << "Top element: " << st.peek() << endl;
    cout << "Minimum element: " << st.getMin() << endl;

    st.pop();

    cout << "After pop:" << endl;
    cout << "Top element: " << st.peek() << endl;
    cout << "Minimum element: " << st.getMin() << endl;

    return 0;
}