// 5. Given a sorted array A, having N integers. You need to find any pair (i,j) having sum as given number X

#include <iostream>
#include <vector>

void pairSum(std::vector<int> v, int target) {
	if (v.size() == 0)	return;
	int l = 0, r = v.size() - 1, sum = 0;
	while (l < r) {
		sum = v[l] + v[r];
		if (sum < target)		l++;
		else if (sum > target)	r--;
		else {
			std::cout<<l<<", "<<r<<"\n";
			return;
		}
	}
	return;
}

int main () {
	std::vector<int> v = {1,2,3};
	pairSum(v, 5);
	return 0;
}