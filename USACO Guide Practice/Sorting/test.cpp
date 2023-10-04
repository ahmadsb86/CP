#include <bits/stdc++.h>    
using namespace std;

int main() {
    int n; cin >> n;
    pair<int, int>  cows[n];
    for (int i = 0; i < n; i++) {
        cin >> cows[i].first >> cows[i].second;
    }

    if (n < 2) {
        cout << 0;
        return 0;
    }

    int extremes[4];    //min x, max x, min y, max y
    int seconds[4];    //extereme - second exterme


    sort(cows, cows + n);
    extremes[0] = cows[0].first;
    extremes[1] = cows[n - 1].first;
    seconds[0] = cows[1].first - cows[0].first;
    seconds[1] = cows[n - 1].first - cows[n - 2].first;

    sort(cows, cows + n, [](pair<int, int>  a, pair<int, int>  b) {return a.second < b.second;});
    extremes[2] = cows[0].second;
    extremes[3] = cows[n - 1].second;
    seconds[2] = cows[1].second - cows[0].second;
    seconds[3] = cows[n - 1].second - cows[n - 2].second;

    int preH = (extremes[1] - extremes[0]);
    int preW = (extremes[3] - extremes[2]);
    int preA = preH * preW;     //area without a cow taken out

    int takeLeft = preA - (preH * seconds[0]);
    int takeRight = preA - (preH * seconds[1]);
    int takeTop = preA - (preW * seconds[2]);
    int takeBottom = preA - (preW * seconds[3]);

    cout << takeLeft;
    cout << min(min(takeLeft, takeRight), min(takeTop, takeBottom));

}