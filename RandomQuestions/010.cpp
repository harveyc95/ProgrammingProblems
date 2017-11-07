// 10. Longest Consecutive Character

#include <iostream>
#include <tuple>
using namespace std;

pair<char,int> longestConsecutiveCharacter(string s) {
	int head = 0, tail = 0, longest = 0;
	char c = 0;
	for (int i = 0; i < s.length(); i++) {
		head++;
		if (s[head] == s[tail]) {
			if ((head-tail+1) > longest) {
				longest = head - tail + 1;
				c = s[head];
			}
		} else {
			tail = head;
		}
	}
	pair<char,int> ans;
	ans = make_pair(c, longest);
	return ans;
}

int main () {
	string a = "AABCDDBBBEEEEEEEEA";
	pair<char,int> ans = longestConsecutiveCharacter(a);
	cout<<ans.first<<":"<<ans.second<<"\n";
}