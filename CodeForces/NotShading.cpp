#include <bits/stdc++.h>
using namespace std;

int solve() {

  int n, m, r, c;
  cin >> n >> m >> r >> c;

  char arr[n][m]; bool possible = false;
  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    for (int j = 0; j < x.size(); j++) {
      arr[i][j] = x[j];
      if(x[j] == 'B') possible = true;
    }
  }

  if(!possible){
    return -1;
  }

  if(arr[r-1][c-1] == 'B') return 0;

  for (int i = 0; i < m; i++) 
    if(arr[r-1][i] == 'B') return 1;
  for (int i = 0; i < n; i++) 
    if(arr[i][c-1] == 'B') return 1;

  return 2;

}

int main() {

	ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;
  while (t--)
    cout << solve() << "\n";
}


