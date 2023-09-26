#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define LSOne(x) (x & (-x))]

class st{
  vi raw, arr;
  int l;
public:
  st(vi input){
     raw = input;
     l = raw.size();
     build();
  }
  void build(){
    arr = raw;
    build_layer(0,arr.size()/2);
    debug();
  }
  void build_layer(int off, int len){       const int myEnd=off+len*2;
    if(len == 0){return;}
    for (int i  = off; i  < myEnd; i+=2) {
      arr.push_back(min(arr[i], arr[i+1]));
    }
    build_layer(myEnd, len/2);
  }
  int solve(int a, int b) { return solve(arr.size()-1, pair<int,int>(0,7),  pair<int,int>(a,b)); }
  int solve(int p, pair<int,int> myRange, pair<int,int> targetRange){
      if(myRange == targetRange){ return arr[p]; }            //Full Overlap

      int RightChild = arr.size() - (arr.size()-p)*2-1;
      int LeftChild = arr.size() - (arr.size()-p)*2;

      pair<int,int> RightRange(myRange.first, floor(myRange.second /2));
      pair<int,int> LeftRange(ceil(myRange.second /2), myRange.second);

      cout << endl<<"R: "<<RightRange.first << ":" << RightRange.second << endl;
      cout << endl<<"L: "<<LeftRange.first << ":" << LeftRange.second << endl;

      pair<int,int> RightTargetRange(targetRange.first, RightRange.second);
      pair<int,int> LeftTargetRange(LeftRange.first, targetRange.second);

      cout << endl<<"R2: "<<RightTargetRange.first << ":" << RightTargetRange.second << endl;
      cout << endl<<"L2: "<<LeftTargetRange.first << ":" << LeftTargetRange.second << endl;

      int a = solve(RightChild, RightRange, RightTargetRange);
      int b = solve(LeftChild, LeftRange,  LeftTargetRange);

      return 0;
  }
  void debug(){
    for (int i = 0; i < (int) arr.size()-1; i++) {
      cout << arr[i] << ", ";
    } cout << arr[arr.size()-1] << endl;
  }
};

int main(){
  vi sample {9,3,8,5,6,7,4,1};
  st test(sample);
  cout << test.solve(0,2);
}
