// 4. Find missing integer in ascending array of ints

#include <iostream>
#include <vector>

int find_missing_int_ascending(std::vector<int> v) {
	if (v.empty() || v.size() == 1)
		return -1;
	int prev = v.front();
	for (int i = 1; i < v.size(); i++) {
		if (v[i] != prev + 1)
			return prev+1;
		prev = v[i];
	}
	return -1;
}

int main () {
	std::vector<int> v = {1,2,3};
	std::cout<<find_missing_int_ascending(v)<<std::endl;
	return 0;
}