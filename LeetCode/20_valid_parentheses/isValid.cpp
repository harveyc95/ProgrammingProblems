class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')   stack.push(c);
            else if (stack.empty()) return false;
            else {
                char top = stack.top();
                if (stack.empty())  return false;
                if (c == ')' && top != '(') return false;
                if (c == '}' && top != '{') return false;
                if (c == ']' && top != '[') return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};

 
Add to List
20. Valid Parentheses