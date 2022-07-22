#include <bits/stdc++.h>
using namespace std;

string solve(){

    //inp
    int a,b,c,d,boy; cin >> a >> b >> c;
    
    //try a
    d = b-c;
    boy = c + (2*d);
    if( boy%a == 0 && boy >= a)
        return "Yes\n";

    //try b
    d = abs(c-a);
    boy = min(a,c) + (d*0.5);
    if(d%2 == 0 && boy%b == 0 && boy >= b)
        return "Yes\n";

    //try c
    d = b-a;
    boy = a + (2*d);
    if( boy%c== 0  && boy>=c)
        return "Yes\n";

    //else return no
    return "No\n";
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){ 
        cout << solve();
    }
}