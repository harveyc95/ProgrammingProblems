#include <iostream>

class Solution {
public:
    // bool isPalindrome(int x) {
    //     if (x<0 || x%10 == 0 && x!=0) return false;
    //     int reversed = 0;
    //     while (x > reversed) {
    //         int a = x % 10;
    //         reversed = reversed * 10 + a;
    //         x = x/10;
    //     }
    //     return ((x == reversed) || (x == reversed/10));
    // }
};

bool isPalindrome_2(int x) {
    if (x < 0)  return false;
    int len = 1;
    while (x/len > 1) {
        len *= 10;
    }
    while (x != 0) {
        int l = x/len;
        int r = x%10;
        if (l != r) return false;
        x = ((x-r)%len)/10;
        len /= 100;
    }
    return true;
}

int main () {
    int x = 121;
    std::cout<<isPalindrome_2(x)<<std::endl;
    return 0;
}