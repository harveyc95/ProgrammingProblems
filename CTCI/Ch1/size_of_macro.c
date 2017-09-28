#include <stdio.h>

#define my_size_of(t) ((char *)(&t) - (char *)(&t - 1))

int main () {
  char c;
  int i;
  long l;
	printf("Size of char is: %ld\n", my_size_of(c));
  printf("Size of int is: %ld\n", my_size_of(i));
  printf("Size of long is: %ld\n", my_size_of(l));

	return 0;
}