// 9. Separate the 0s and 1s in an array. 0s on the left, 1s on the right.

#include <vector>
#include <iostream>
using namespace std;

void swap(vector<int> &a, int i, int j) {
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void separateZeroAndOne(vector<int> &a) {
	int l = 0, r = a.size() - 1;
	while (l < r) {
		if (a[l] == 1) {
			swap(a, l, r);
			r--;
		} else {
			l++;
		}
	}
}

int main () {
	vector<int> a = {1,1,1,1,1,1,1,1,1,1,1,0};
	separateZeroAndOne(a);
	for (auto &i:a)
		cout<<i<<", ";
	cout<<"\n";
	return 0;
}