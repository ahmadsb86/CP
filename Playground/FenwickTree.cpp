#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

class fenwick{
  vi x, bit;
public:
  fenwick(vi input){
    x = input;
    bit.assign(input.size(), 0);

    for (size_t j = 1; j <= input.size(); j++)
      bit[j-1] = rsq((j+1)-(j & -j),j);
  }
  int sum(int input){
    if(input < 1) return 0;
    return bit[input-1] + sum(input - (input & -input));
  }
  int rsq(int s, int e){
    int result = 0;
    while(s<=e){
      result += x[s-1];
      s++;
    }
    return result;
  }
};

int main(){
  vi sample {9,3,0,5,6,7,4,1};
  fenwick obj(sample);
  cout << obj.sum(2);
}
