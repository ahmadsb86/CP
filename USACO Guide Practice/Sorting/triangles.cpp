#include <bits/stdc++.h>    
using namespace std;

struct point {
    int x;
    int y;
};

int main() {
    int n; cin >> n;
    point cow[n];
    for (int i = 0; i < n; i++) {
        cin >> cow[i].x >> cow[i].y;
    }


    sort(cow, cow + n, [](point a, point b) {
        if (a.x == b.x) return a.y < b.y;
        return a.x < b.x;
        });

}