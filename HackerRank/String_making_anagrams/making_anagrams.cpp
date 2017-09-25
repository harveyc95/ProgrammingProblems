#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    std::map<char,int> map;
    std::map<char,int>::iterator it;
    int ans = 0;
    for (int i = 0; i < a.length(); i ++) {
        map[a[i]] = map[a[i]] + 1;
    }
    for (int i = 0; i < b.length(); i ++) {
        map[b[i]] = map[b[i]] - 1;
    }
    for (it = map.begin(); it != map.end(); it++) {
        ans += abs(it->second);
    }
    return ans;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

