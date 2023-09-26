#include <stdio.h>
#include <vector>

using namespace std;
int main() {
	vector<int> arr = { 1, 2, 3, 2, 1, 5, 5, 3, 4};
	int v = 0;
	for(int i = 0; i < arr.size(); i++){
		v = v ^ arr[i];
	}
	printf_s("%d", v);
}