/*
ID: ahmadsa3
LANG: C++
TASK: friday
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define LSOne(x) (x & (-x))

int mtab[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    ifstream fin("friday.in"); ofstream fout("friday.out");
    int n; fin >> n;
    vi ans(7);
    int dow = 0;
    fill(ans.begin(), ans.end(), 0);
    for(int y = 1900; y < 1900 + n; y++) {
      for(int m = 0; m < 12; m++) {
        ans[dow]++;
        int leap = m == 1 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
        dow = (dow + mtab[m] + leap) % 7;
      }
    }
    for (int i = 0; i < 6; i++) {
      fout << ans[i] << ' ';
    }
    fout << ans[6] << endl;


    return 0;
}
