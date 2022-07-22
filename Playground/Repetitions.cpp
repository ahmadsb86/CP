#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int N;

int main() {
	scanf("%d", &N);
	if (N == 1) {
		printf("1");
		return 0;
	}
	if (N < 4) {
		printf("NO SOLUTION");
		return 0;
	}
	for (int i = N-1; i > 0; i -= 2) {
		printf("%d ", i);
	}
	for (int i = N; i > 0; i -= 2) {
		printf("%d ", i);
	}
	return 0;
}