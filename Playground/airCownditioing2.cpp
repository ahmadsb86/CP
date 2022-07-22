#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
vi mySlice(vi in);
int mySolve(vi d);


int main(){

  /* -------------------------------- Variables ------------------------------- */
  
  int n; cin >> n;
  vi p,t,d(10,0);

  /* ----------------------------------- IO ----------------------------------- */
  
  for (int i = 0; i < n; i++) {
    int x = 0; cin >> x; t.push_back(x);}
  for (int i = 0; i < n; i++){
    int x = 0; cin >> x; p.push_back(x);}
  for (int i = 0; i < n; i++)
    d[i] = p[i] - t[i];
  
  /* ---------------------------------- Solve --------------------------------- */ 

  cout << "Ans: " << mySolve(d);

}


int mySolve(vi d){ int ans = 0;
  
  vi train = mySlice(d);

  //Break condition
  if(train.size() == 0) return ans;

  //Recursion
  else{

    //Find smallest num
    int s = train[0];
    for (int i = 0; i < (int) train.size(); i++) {
      if(train[i] < s) s = train[i];
    }

    //Sub smallest num from all of train
    for (int i = 0; i < (int) train.size(); i++) {
      train[i] = train[i] - s;
    }

    for (const auto& i: train)
      cout << i << ' ';

    return ans + s;
  }
}

vi mySlice(vi in){
  for (int i = 0; i < (int) in.size(); i++) {
    if(in[i] < 1){
      in.erase(in.begin() + i);
      i--;
    }
  }
  return in;
}

