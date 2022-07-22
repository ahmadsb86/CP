/*
ID: ahmadsa3
LANG: C++
TASK: beads
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

bool opp(char a, char b);


int main() {
    ifstream fin("beads.in"); ofstream fout("beads.out");
    int c=0; int start, n;fin >> n;
    vi combs; char* charArr;
    string inp; fin >> inp; charArr = &inp[0];
    while (true) {
      if((charArr[c] == 'r' && charArr[c+1] == 'b' )|| (charArr[c] == 'b' && charArr[c+1] == 'r') ){
        start = c+1;
        break;
      } c++;
    }

    char sChar = 's'; int s = 0;
    for (int i = start; i < n; i++) {
      if(opp(charArr[i], sChar)){ combs.push_back(s); s = 1; sChar = charArr[i];}
      else{
        s++;
      }
    }
    for (int i = 0; i < start; i++) {
      if(opp(charArr[i], sChar)){ combs.push_back(s); s = 1;}
      else{
        s++;
      }
    }
    combs.push_back(s);

    // fout << combs.size();
    for (const auto& i: combs)
      fout << i << ", ";
    return 0;
}
