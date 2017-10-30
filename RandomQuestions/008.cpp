// 8. You are given an array A. A[0:k] = 0 and A[k+1:n] = 1. Find k.

#include <vector>
#include <iostream>
using namespace std;

int findK(std::vector<int> &a) {
	int l = 0, r = a.size() - 1;
	int mid = (l+r)/2;
	while (l < r) {
		cout<<l<<" : "<<r<<" : "<<mid<<endl;
		if (a[mid] == 0) {
			l = mid + 1;
		} else {
			r = mid;
		}
		mid = (l+r)/2;
	}
	cout<<mid<<endl;
	return (a[mid]) ? mid : -1;
}

int main () {
	std::vector<int> a = {0,0,0,0};
	std::cout<<findK(a)<<"\n";
	return 0;
}