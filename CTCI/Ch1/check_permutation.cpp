#include <iostream>
#include <string>

// time complexity O(1) - constant
// space complexity O(1) - constant

bool check_permutation (std::string a, std::string b) {
	if (a.length() != b.length())	return false;

	int arr[128] = {0};
	for (int i = 0; i < a.length(); i++) {
		arr[a[i]] += 1;
	}

	for (int j = 0; j < b.length(); j++) {
		if (arr[b[j]] > 0) {
			arr[b[j]] -= 1;
		} else {
			arr[b[j]] += 1;
		}
	}

	int sum = 0;
	for (int k = 0; k < 128; k++) {
		sum += arr[k];
	}

	std::cout << sum << std::endl;
	return sum == 0 ? true : false;
}

int main () {
	std::cout << check_permutation("ABCDEFG", "ABCDEFG") << std::endl;
}