// 3. Reverse a string

#include <iostream>
#include <string>

std::string reverse_recurse(std::string s) {
	if (s.length() == 1) {
		return s;
	}
	return reverse_recurse(s.substr(1)) + s[0];
}

std::string reverse_iter(std::string s) {
	for (int i = 0; i < s.length()/2; i++) {
		char tmp;
		s[i] = tmp;
		s[i] = s[s.length()-i];
		s[s.length()-i] = tmp;
	}
	return s;
}

int main () {
	std::string a = "abcdefghijklmnopqrstuvwxyz";
	std::cout<<reverse_recurse(a)<<std::endl;
	std::cout<<reverse_recurse(a)<<std::endl;
	return 0;
}