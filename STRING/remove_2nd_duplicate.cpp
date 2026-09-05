#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string &s) {
        // Frequency/seen array for all 256 ASCII characters, initialized to 0
        int freq[256] = {0}; 
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            // If the character has not been seen yet, add it to result and mark it seen
            if (freq[ch] == 0) {
                result += ch;
                freq[ch] = 1; // Mark as visited
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string s1 = "geeksforgeeks";
    cout << "Original: " << s1 << endl;
    cout << "Processed: " << solution.removeDuplicates(s1) << endl;
    
    cout << "-------------------" << endl;
    
    // Test case 2
    string s2 = "HappyNewYear";
    cout << "Original: " << s2 << endl;
    cout << "Processed: " << solution.removeDuplicates(s2) << endl;
    
    return 0;
}