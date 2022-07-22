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

struct Cow{
  int x;
  int y;
};

bool cmpHorizontal(Cow a, Cow b){
  return a.x < b.x;
}

bool cmpVertical(Cow a, Cow b){
  return a.y < b.y;
}


int solve(int n, vector<Cow> cows){

  if(n<4) return 0;

  vector<Cow> v(all(cows));
  vector<Cow> h(all(cows));

  sort(all(v), cmpVertical);
  sort(all(h), cmpHorizontal);

  FOR(i,0,n) cout << h[i].x << ", " << h[i].y << '\n';
  cout << "v\n";
  FOR(i,0,n) cout << v[i].x << ", " << v[i].y << '\n';

  int sellR = (h[n-2].x - h[0].x) * (v[n-1].y - v[0].y);
  int sellL = (h[n-1].x - h[1].x) * (v[n-1].y - v[0].y);
  int sellT = (h[n-1].x - h[0].x) * (v[n-2].y - v[0].y);
  int sellB = (h[n-1].x - h[0].x) * (v[n-1].y - v[1].y);

  return min({sellR, sellL, sellT, sellB});

}


int main() {
  FASTIO;
  int n; cin >> n;
  vector<Cow> cows(n);
  FOR(i,0,n) cin >> cows[i].x >> cows[i].y;
  cout << solve(n, cows);
}