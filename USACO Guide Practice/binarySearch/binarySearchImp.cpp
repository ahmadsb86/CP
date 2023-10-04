#include <bits/stdc++.h>    
using namespace std;
void setIO(string name = "") {  // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);  // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

bool f(int num) {
    if (num <= 10) return true;
    return false;
}

int last_true(int lo, int hi) {
    // if none of the values in the range work, return lo - 1
    lo--;
    while (lo < hi) {
        // find the middle of the current range (rounding up)
        int mid = lo + (hi - lo + 1) / 2;
        if (f(mid)) {
            // if mid works, then all numbers smaller than mid also work
            lo = mid;
        }
        else {
            // if mid does not work, greater values would not work either
            hi = mid - 1;
        }
    }
    return lo;
}

int main() {
    setIO("");
    cout << last_true(0, 11);
    return 0;
}