// Swap even and odd bits of a 32 bit integer

#include <iostream>

int swap_even_and_odd_bits(int x) {
	int odd = x & 0x55555555;
	int even = x & 0xAAAAAAAA;
	return ((even >> 1)|(odd << 1));
}

int main () {
	// 0x55555555 = 01010101 01010101 01010101 01010101
	// 0xAAAAAAAA = 10101010 10101010 10101010 10101010
	// -1431655766 = 0xAAAAAAAA
	std::cout<<swap_even_and_odd_bits(0x55555555)<<std::endl;
	return 0;
}