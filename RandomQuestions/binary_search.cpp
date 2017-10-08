#include <iostream>
#include <vector>

int binary_search(std::vector<int>& v, int target) {
	int l = 0;
	int r = v.size()-1;
	int m = (l+r)/2;
	while (l < r) {
		std::cout<<l<<' '<<m<<' '<<r<<std::endl;
		if (target > v[m])
			l = m + 1;
		else if (target == v[m])
			return m - 1;
		else
			r = m;
		m = (l+r)/2;
	}
	return l;
}

int main () {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	std::cout<<binary_search(v, 4)<<std::endl;
	return 0;
}