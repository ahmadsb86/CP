#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main(){
  vi fb(10,0), sb(10,0); int ans; 
  ifstream fin("backforth.in"); ofstream fout("backforth.out");
  for (auto& i: fb){
    int a = 0; fin >> a;
    i = a;
  }
  for (auto& i: sb){
    int a = 0; fin >> a;
    i = a;
  }
  for (const auto& i: sb)
    fout << i << ' ';
}