#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
void solve(vi arr);

vi N;
int input, x;
int main(){
  while (cin >> input)
    N.push_back(input);
  solve(N);
}

void solve(vi arr){ int FirstMax= arr[0], SecondMax = 0; bool first = true;
  for (int i = 1; i < (int) arr.size(); i++){
    if(first){
      if(arr[i] < FirstMax){SecondMax = arr[i];first = false;}
      else if(arr[i] > FirstMax){
        SecondMax = FirstMax;
        FirstMax = arr[i];
        first = false;
      }
    }
    if(!first){
      if (arr[i] > FirstMax){ SecondMax=FirstMax; FirstMax=arr[i];}
      else if(arr[i] < FirstMax && arr[i] > SecondMax){ SecondMax = arr[i];}
    }
  }
  if(first){cout << "No Valid answer" << endl;}
  else {cout << "Answer: " << SecondMax << endl;}
}
