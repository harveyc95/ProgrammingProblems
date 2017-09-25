// time complexity O(n)
// space complexity O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string::iterator it;
        std::string::size_type found;
        std::string best = "", curr = "";
        
        // iterate through string s
        for (it = s.begin(); it < s.end(); it++) {
            // check if *it exists in curr substring
            found = curr.find(*it);
            // remove all characters up to *it
            if (found != std::string::npos) {
                curr.erase(0, found + 1);
            }
            curr = curr + *it;
            best = curr.length() > best.length() ? curr : best;
        }
        return best.length();
    }
};