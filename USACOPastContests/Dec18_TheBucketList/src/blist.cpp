#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;


bool cmp(vi a, vi b) {
  return a[0] < b[0];
}

int main(){
  int n, ans, left = 0;; cin >> n; 
  vii cows( n , vi (3, 0)); 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      int a; cin >> a;
      cows[i][j] = a;
    }
  }

  sort(cows.begin(), cows.end(), cmp);
  cout << "------------------------------------" << endl;
  for (int i = 0; i < n; i++) {
    int b = cows[i][2];
    left -= b; ans += min(left, 0); left = 0;
  }
  for ( const auto &row : cows ){
    for ( const auto &s : row ) cout << s << ' ';
    std::cout << std::endl;
  }
}