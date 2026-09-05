#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        vector<char> ans;
        
        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            
            // Check if the character is a letter (A-Z, a-z) or a number (0-9)
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                
                // Convert uppercase to lowercase manually
                if(ch >= 'A' && ch <= 'Z') {
                    ch = ch + 32; 
                }
                
                ans.push_back(ch);
            }
        }
        
        // Two-pointer check for palindrome
        int i = 0;
        int j = (int)ans.size() - 1;
        
        while(i < j){
            if(ans[i] != ans[j]){
                return false;
            } else {
                i++;
                j--;
            }
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string s1 = "A man, a plan, a canal: Panama";
    cout << "Input: " << s1 << endl;
    cout << "Is Palindrome? " << (solution.isPalindrome(s1) ? "true" : "false") << endl;
    
    cout << "-----------------------------------" << endl;
    
    // Test case 2 (The one that failed earlier)
    string s2 = "a.";
    cout << "Input: " << s2 << endl;
    cout << "Is Palindrome? " << (solution.isPalindrome(s2) ? "true" : "false") << endl;
    
    return 0;
}