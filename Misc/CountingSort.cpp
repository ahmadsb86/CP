#include "/Users/user/stdc++.h"
#define LEN 10;
using namespace std;

void countingSort(int a[], int R, int L){

  int n = LEN;
  int k = (R-L) + 1;
  int out[n];

  //Step 1
  int f[k+1];
  memset(f, 0, sizeof(f));

  //Step 2
  for (int i = 0; i < n; i++){
    f[a[i]-L] ++;
  }

  //Step 3
  for (int i = 1; i < k; i++) {
    f[i] += f[i-1];
  }

  //Step 4
  for (int i = n-1; i >= 0; i--){
    out[f[a[i]-L] - 1] = a[i];
    f[a[i]-L] --;
  }


  //Step 5
  for (int i = 0; i < n; i++){
    a[i] = out[i];
  }


}


int main(){
  int testArr[] = {2,4,5,3,2,3,4,3,2,5};
  countingSort(testArr, 5, 2);
  int n = LEN;

  cout << "Sorted Array: \n";
  for (int i = 0; i < n; i++) {
    cout << testArr[i] << ", ";
  }
}
