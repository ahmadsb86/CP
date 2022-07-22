#include <stdio.h>

int N, x, xum;

int main() {

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		xum ^= i;
	}
	for (int i = 1; i < N-1; i++)
	{
		scanf_s("%d", &x);
		xum ^= x;
	}
	printf_s("%d", xum);
	return 0;
}