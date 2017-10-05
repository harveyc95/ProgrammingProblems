#include <iostream>
#include <string>

// time complexity - O(n)
// space complexity - O(1)

std::string urlify(std::string s) {

	// remove trailing spaces
	for (int i = s.length()-1; i >= 0; i--) {
		if (isspace(s[i])) {
			s.erase(i, 1);
		} else {
			break;
		}
	}

	// replace spaces with %20
	for (int i = 0; i < s.length(); i++) {
		if (isspace(s[i])) {
			s.erase(i, 1);
			s.insert(i, "%20");
		}
	}

	return s;
}

int main () {
	urlify("A B C D E F G H I J K L M N                 ");
	return 0;
}