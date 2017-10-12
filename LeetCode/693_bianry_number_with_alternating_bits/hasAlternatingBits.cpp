class Solution {
public:
    bool hasAlternatingBits(int n) {
        if (n==0) return false;
        bool last = n&1;
        while (n>>=1 > 0) {
            if ((n&1) == last) return false;
            last = !last;
        }
        return true;
    }
};