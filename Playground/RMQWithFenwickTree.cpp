#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define LSOne(x) (x & (-x))
#define INF 2147483647;

class fenwick{
  vi raw, bit;
public:
  fenwick(vi &input){ raw = input;  //init
    bit.assign(input.size(), 0);
    for (size_t j = 1; j <= input.size(); j++) //bit precompute
      bit[j-1] = preCompute((j+1)-LSOne(j),j);
  }
  int rmq(int input){ // recursivly min each pv in O(log n)
    if(input < 1) return INF; //break condition for recursive calls
    return min(rmq(input - LSOne(input)), bit[input-1]); //recursivly taking min of each pv
  }
  int preCompute(int s, int e){ //not passing by refrence, so I can directly iterate
    --s; --e;  // sine ft is 1-indexed
    int result = INF; //dummy val
    while(s<=e){
      s++;
      result = min(raw[s-1], result);
    }return result;
}};

int main(){
  vi sample {9,12,10,5,6,7,4,15};
  fenwick obj(sample);
  cout << obj.rmq(4);
}
