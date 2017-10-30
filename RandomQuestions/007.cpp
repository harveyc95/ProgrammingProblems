// Given an array having N integers, 
// find the contiguous subarray having sum as great as possible, but not greater than M.

#include <iostream>
#include <vector>
#include <algorithm>

int maxContigousUpToM(std::vector<int> &a, int M) {
	int l = 0, r = 0, ans = 0, sum = 0;
	while (l < a.size()) {
		while (sum + a[r] <= M && r < a.size()) {
			sum += a[r];
			r++;
		}
		ans = std::max(ans, sum);
		if (a[l] <= M)	sum -= a[l];
		l++;
	}
	return ans;
}

int main () {
	std::vector<int> a = {1,1,1,1,6};
	int M = 7;
	std::cout<<maxContigousUpToM(a, M)<<"\n";
	return 0;
}