#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;

    if(n%2 == 0) cout << n-3 << " " <<  "2 " << 1 << endl; 
    else{
        if(n%4 == 3) cout << ((n-1)/2) -2 << " " << ((n-1)/2) +2 << " 1\n";
       else cout << ((n-1)/2) - 1<< " " << ((n-1)/2) + 1 << " 1\n";
    }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
}