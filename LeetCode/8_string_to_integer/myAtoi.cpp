class Solution {
public:
    int myAtoi(string str) {
        int sign = 1;
        long result = 0;
        for (int i = 0; i < str.size();) {
            i = str.find_first_not_of(' ');
            if (str[i] == '-' || str[i] == '+')
                sign = (str[i++] == '-')? -1 : 1;
            while ('0' <= str[i] && str[i] <= '9') {
                result = result*10 + (str[i++]-'0');
                if(result*sign >= INT_MAX) {return INT_MAX;}
                if(result*sign <= INT_MIN) {return INT_MIN;}
            }
            return result*sign;
        }
        return result;
    }
};