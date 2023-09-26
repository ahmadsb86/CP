#include <stdio.h>

int choose(int n, int k);
int badPositions(int t);
int solve(int t);

int main() {
	int n;
	scanf_s("%d", &n);
    printf_s("\nAnswers: \n");
	for (int i = 1; i <= n; i++) {
		printf_s("%d\n", solve(i));
	}
}


int solve(int t) {
	return choose(t * t,2) - badPositions(t);
}


int choose(int n, int k) {
    if (k == 0) return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

int badPositions(int t) {
    int sum = 0;
    if (t < 3) return 0;
    if (t == 3) return 8;
    for (int i = 1; i <= t; i++) {
        if (i == 1 || i == t) sum += 4 + ((t - 4) * 2) + 2 +((t-2)*2);
        else if (i == 2 || i == t - 1) sum += 8 + ((t - 4) * 4) + 2 + ((t - 2) * 2);
        else sum += 8 + ((i - 4) * 4) + 4 + ((t - 2) * 4);
    }
    return sum/2;
}

/*
3 = 8
4 =
*/