// 1. Round a number to the next largest multiple of 16

#include <iostream>

int round_to_largest_16(int x) {
	return (x & 0xF) ? ((x >> 4 << 4) + 16) : x;
}

int main () {
	std::cout<<round_to_largest_16(30)<<std::endl;
	return 0;
}