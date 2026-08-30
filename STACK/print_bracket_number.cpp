#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter string including only ( and ) with mixed alphabets: Ex: (a(b)c) : ";
    cin >> s;

    stack<int> st;
    vector<int> ans;

    int count = 0;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] == '(') {
            count++;
            st.push(count);
            ans.push_back(count);
        }

        else if(s[i] == ')') {
            ans.push_back(st.top());
            st.pop();
        }
    }

    cout << "Bracket Numbers: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}