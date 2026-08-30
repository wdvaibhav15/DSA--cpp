#include <iostream>
#include <stack>
#include <string>
using namespace std;

int minParentheses(string s) {
    stack<char> st;
    int count = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                count++;
            }
            else {
                st.pop();
            }
        }
    }

    return count + st.size();
}

int main() {
    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    cout << "Minimum parentheses to add: "
         << minParentheses(s) << endl;

    return 0;
}