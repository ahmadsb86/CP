#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


int findChunks(int d[], int n){
  bool pos; vi tempAns; int ans = 0;
  if(d[0] >= 0) pos = true;
  if(d[0] < 0) pos = false;
  for (int i = 0; i < n; i++) {
    if(d[i] >= 0 && pos == true) tempAns.push_back(d[i]);
    if(d[i] <= 0 && pos == false) tempAns.push_back(d[i]);
    else{

      //set ans
      int highest = 0;
      for (int i = 0; i < (int) tempAns.size(); i++) {
        if(abs(tempAns[i]) > highest){
          highest = abs(tempAns[i]);
        }
      }

      cout << "HIGHEST: " << highest << endl;

      ans += highest;
      tempAns.empty();

      if(d[i] >= 0) pos = true;
      if(d[i] < 0) pos = false;
      
    }
  }
  return -1;
}



int main(){
  int n; cin >> n; int p[n], t[n], d[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  for (int i = 0; i < n; i++) {
    d[i] = p[i] - t[i];
  }
  cout << findChunks(d, n);
}