#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int isLonely(string in){
    int g = 0; int h = 0;
    for (int i = 0; i < (int) in.length(); i++) {
      if(in[i] == 'G'){
          g++;
      }
      else{
          h++;
      }
    }
    if(g == 0 || h == 0){
        return 0;
    }
    else if(g == 1 || h == 1){
        return 1;
    }
    else{
        return 2;
    }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int ans = 0; int n; cin >> n; string a;
  cin >> a;
  // if(n == 3){
  //     char yo = a[0];
  //     if(a[0] == yo && a[1] == yo && a[2] == yo){
  //         cout << 0;
  //         return 0;
  //     }
  //     cout << 1;
  //     return 0;
  // }
  for (int i = 2; i < n; i++) {
    int s = 3;
    string test = a.substr(i-(s-1), s);
    int res = isLonely(test);
    while(res != 2) {
      ans ++;
      if(res == 0){ ans --;}
      s++;
      if(i-(s-1) < 0){
        break;
      }
      else{
        test = a.substr(i-(s-1), s);
        res = isLonely(test);
      }
      
    }
    
  }
  cout << ans;
}