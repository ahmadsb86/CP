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

struct Toy{
  int price;
  int joy;
  int index;
  float HFM;
};

bool cmp(Toy a, Toy b){
  return a.HFM > b.HFM;
}

int main() {
  FASTIO;
  int N; cin >> N;
  vector<Toy> toys(N);
  FOR(i,0,N){
    cin >> toys[i].joy >> toys[i].price;
    toys[i].HFM = toys[i].joy / (toys[i].price*1.0);
    toys[i].index = i+1;
  }
  sort(all(toys), cmp);
  cout << toys[0].price + toys[1].price + toys[2].price << endl;
  FOR(i,0,3){
    cout << toys[i].index << endl;
  }
}