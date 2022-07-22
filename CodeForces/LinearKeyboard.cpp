#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define LSOne(x) (x & (-x))

int distOf(int a, string k){
  for (int i = 0; i < (int) k.length() ; i++) {
    if(a == k[i]) return i;
  }
  cout << "error" << endl; return -1;
}


int main(){
  int t; cin>>t;
  string k,s; int sum = 0; vi ans;
  for (int i = 0; i < t ; i++){
    cin >> k >> s;
    if(s.length() == 1){ ans.push_back(0); }
    else{
      for (int i = 0; i < (int) s.length() - 1; i++) {
        sum += abs(distOf(s[i],k) - distOf(s[i+1],k));
      }
      ans.push_back(sum); sum = 0;
    }
  }
  for (const auto& i: ans)
    cout << i << endl;
}
