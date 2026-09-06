#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> count(26, 0);
        
        // Increase count for 's' and decrease for 't' at the same time
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // Check if all counts are zero or not
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    
    // Test cases
    string s1 = "anagram";
    string t1 = "nagaram";
    
    string s2 = "rat";
    string t2 = "car";

    cout << boolalpha; // Prints true/false instead of 1/0
    cout << "Test 1: " << sol.isAnagram(s1, t1) <<endl;
    cout << "Test 2: " << sol.isAnagram(s2, t2) <<endl;

    return 0;
}