class Solution {
public:
    bool hasAlternatingBits_1(int n) {
        if (n==0) return false;
        bool last = n&1;
        while (n>>=1 > 0) {
            if ((n&1) == last) return false;
            last = !last;
        }
        return true;
    }

    bool hasAlternatingBits_2(int n) {
        int k = n + (n>>1) + 1;
        return ((k & (k-1)) == 0);
    }
};