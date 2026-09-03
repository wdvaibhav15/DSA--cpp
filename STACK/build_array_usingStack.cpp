#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0;

        for (int i = 1; i <= n; i++) {
            if (j == target.size())
                break;

            ans.push_back("Push");

            if (i == target[j]) {
                j++;
            } else {
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> target = {2, 4, 5};
    int n = 5;

    vector<string> result = obj.buildArray(target, n);

    cout << "Operations: ";
    for (string op : result) {
        cout << op << " ";
    }

    return 0;
}