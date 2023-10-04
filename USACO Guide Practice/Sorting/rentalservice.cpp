#include <bits/stdc++.h>    
using namespace std;

// the argument is the input filename without the extension

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {

    setIO("rental");


    int N, M, R;
    cin >> N >> M >> R;
    int cows[N], renters[R];
    pair<int, int> milkers[M];
    for (int i = 0; i < N; i++) {
        cin >> cows[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> milkers[i].second >> milkers[i].first;
    }
    for (int i = 0; i < R; i++) {
        cin >> renters[i];
    }
    sort(cows, cows + N, greater<>());
    sort(milkers, milkers + M, greater<>());
    sort(renters, renters + R, greater<>());

    int profits[N]; //profits for each cow
    for (int i = 0; i < N; i++) {
        profits[i] = 0;
    }

    int cur = 0;
    for (int i = 0; i < N && cur < M; i++) {
        if (cows[i] < milkers[cur].second) {
            milkers[cur].second -= cows[i];
            profits[i] += milkers[cur].first * cows[i];
        }
        else {
            profits[i] += milkers[cur].first * milkers[cur].second;
            cows[i] -= milkers[cur].second;
            i--;
            cur++;
        }
    }

    long long total = 0;
    for (auto e : profits) {
        total += e;
    }
    long long ans = 0;
    for (int i = N - 1; i >= 0 && (N - 1) - i < R; i--) {
        total = total - profits[i] + renters[(N - 1) - i];
        ans = max(total, ans);
    }
    cout << ans;
}