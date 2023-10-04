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

int N, T_max;

bool validate_K(int k, int cow[]) {

    return true;
}

int main() {
    setIO();
    cin >> N >> T_max;
    int cow[N];
    for (int i = 0; i < N; i++) {
        cin >> cow[i];
    }
    validate_K(4, cow);

    // int lo = 0;
    // int hi = T;
    // lo--;
    // while (lo < hi) {
    //     int mid = lo + (hi - lo + 1) / 2;
    //     if (f(mid)) {
    //         lo = mid;
    //     }
    //     else {
    //         hi = mid - 1;
    //     }
    // }
    // cout << lo;
}