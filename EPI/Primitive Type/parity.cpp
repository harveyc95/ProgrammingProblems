#include <iostream>

short parity (unsigned long x) {
	short count = 0;
	while (x) {
		// std::cout << x << std::endl;
		count += x&1;
		x >>= 1;
	}
	return count;
}

int main () {
	unsigned long x = 255;
	std::cout << parity(x) << std::endl;
}