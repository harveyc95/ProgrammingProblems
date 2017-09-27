#include <string>

class Solution {
public:
    string longestPalindrome(string s) {
        
        if (s == "") return 0;
        
        string ans;
        ans = s[0];
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j <= s.length(); j++) {
                string sub = s.substr(i,j);
                if (isPalindrome(sub)) {
                    ans = sub.length() > ans.length() ? sub : ans;
                }
            }
        }
        return ans;
    }
    
    bool isPalindrome(string s) {
        for (int i = 0; i <= s.length()/2; i++) {
            if (s[i] != s[s.length()-1-i])  return false;
        }
        return true;
    }
};