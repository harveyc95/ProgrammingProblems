#include <iostream>
#include <string>

// time complexity
// space complexity


// M >= 1, N >= 1
int unique_path (int M, int N) {
	int arr[M][N];

	// initalize arr[0~M][0] = 0
	for (int i = 0; i < M; i++)
		arr[i][0] = 1;

	// initalize arr[0][0~N] = 0
	for (int j = 0; j < N; j++)
		arr[0][j] = 1;

	for (int i = 1; i < M; i++) {
		for (int j = 1; j < N; j++) {
			arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}

	return arr[M-1][N-1];
}

int main () {
	std::cout << unique_path(4,4) << std::endl;
}