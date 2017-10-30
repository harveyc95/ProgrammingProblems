// 6. Given two sorted arrays A and B, each having length N and M respectively.
// Form a new sorted merged array having values of both the arrays in sorted format.

#include <iostream>
#include <vector>

std::vector<int> mergeTwoVectors(std::vector<int> &a, std::vector<int> &b) {
	if (a.size() == 0)	return b;
	if (b.size() == 0)	return a;
	std::vector<int> res;
	int a_index = 0, b_index = 0;
	for(int i = 0; i < a.size() + b.size(); i++) {
		if (b_index >= b.size() || a[a_index] < b[b_index]) {
			res.push_back(a[a_index]);
			a_index++;
		}
		else if (a_index >= a.size() || b[b_index] <= a[a_index]) {
			res.push_back(b[b_index]);
			b_index++;
		}
	}
	return res;
}

int main () {
	std::vector<int> a = {-99};
	std::vector<int> b = {-2, 0, 1, 3, 5};
	std::vector<int> c = mergeTwoVectors(a, b);
	for (auto &i : c)
		std::cout<<i<<" : ";
	std::cout<<"\n";
	return 0;
}