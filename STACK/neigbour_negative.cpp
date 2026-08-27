#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    for (int i = 0; i < n; i++) {
        if(s.empty()){
            s.push(arr[i]);
        }else if(arr[i] >= 0){
            if(s.top() >= 0){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }else{
            if(s.top() < 0){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }
    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<"The final array is: ";
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}

