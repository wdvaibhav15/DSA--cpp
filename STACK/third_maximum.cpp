#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int n = nums.size();

        int large1 = INT_MIN;
        int large2 = INT_MIN;
        int large3 = INT_MIN;

        for (int i = 0; i < n; i++) {

            int x = nums[i];

            // Ignore duplicate values
            if (x == large1 || x == large2 || x == large3) {
                continue;
            }

            if (x > large1) {
                large3 = large2;
                large2 = large1;
                large1 = x;
            }
            else if (x > large2) {
                large3 = large2;
                large2 = x;
            }
            else if (x > large3) {
                large3 = x;
            }
        }

        // If third maximum doesn't exist,
        // return the maximum
        if (large3 == INT_MIN) {
            return large1;
        }

        return large3;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {3, 2, 1,4,2,7,8,10};

    int result = obj.thirdMax(nums);

    cout << "Third Maximum: " << result << endl;

    return 0;
}