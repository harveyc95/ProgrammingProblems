#include <string>
#include <iostream>

// time complexity O(n)
// space complexity O(1)

// takes input string s
// capitalizes the first letter of each word
std::string toCapCase(std::string s) {
  int index = 0;
  for (int i = 0; i < s.length(); i++) {
    if (isspace(s[i]) or (i == s.length() - 1)) {
    	s[index] = toupper(s[index]);
    	index = i + 1;
    }
  }
  return s;
}

int main () {

	std::cout << toCapCase("Aaa bb cc dd ee ff gg hh i j k l m n o p q r s") << std::endl;

	return 0;
}