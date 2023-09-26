#include "bits/stdc++.h"
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define TESTS int t; cin>>t; while(t--)
#define FOR(i,L,R) for (int i = L; i < R; i++)
#define arl(x) sizeof(x)/sizeof(x[0])
#define clr(a,x) memset(a,x,sizeof(a))
#define printvec(v) for(auto&e:v) cout << e << " ";
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define eb emplace_back
#define ll long long
typedef pair<int, int> pii;
typedef vector<int> vi;

struct Time{
  int H;
  int M;
  int S;
};

bool cmp(Time a, Time b){
  if(a.H != b.H) return a.H < b.H;
  if(a.M != b.M) return a.M < b.M;
  return a.S < b.S;
}

int main() {
  FASTIO;
  int n; cin >> n;
  vector<Time> times(n);
  FOR(i,0,n){
    cin >> times[i].H >> times[i].M >> times[i].S;
  }
  sort(all(times), cmp);
  FOR(i,0,n){
    cout << times[i].H << " " << times[i].M << " " << times[i].S << endl;
  }
}