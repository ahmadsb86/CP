#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
#define pb push_back


int divisibleSumPairs(int n, int k, vector<int> ar) {
  int res = 0; int mods[k]; memset(mods,0,sizeof(mods));
  for (int i = 0; i < ar.size(); i++) mods[ar[i]%k] ++;
  res +=  (mods[0]*(mods[0]-1))/2;
  for(int i=1;i<ceil(k/2.0);i++) res+= mods[i] * mods[k-i];
  if(k%2==0) res+=(mods[k/2]*(mods[k/2]-1))/2;
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int n; cin >> n;
  vi inar(n);
  for(int i=0;i<n;i++) cin >> inar[i];
  cout << divisibleSumPairs(6,3, inar);
}