#include "bits/stdc++.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int num, len; cin >> num >> len;

  for(int i=0;i<len;i++)
    cout << int(num/pow(10,i)) % 10 << endl;

}


