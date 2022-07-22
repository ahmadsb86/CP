#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi returnSet(int x, int target){ vi ans,out; int sum = 0;
  for (int i = x; i  > 0; i --) {
    if(i+sum <= target){
      ans.push_back(i);
      sum+=i;
    } else{ out.push_back(i); }
  }
  return ans;
}

int main(){
  int n, sum;
  cin >> n; sum = (n*(n+1))/2;
  if(sum%2!=0) cout << "NO" << endl;
  else{
    cout << "YES" << endl;
    vi res = returnSet(n,sum/2);
    cout << res.size() << endl;
    for (const auto& i: res)
      cout << i << ' ';
    cout << n-res.size() << endl;
    vi joggery;
    for (int i = 0; i < (int) res.size(); i++) {
      if()
    }
  }
}
