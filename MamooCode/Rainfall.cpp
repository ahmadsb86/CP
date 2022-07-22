#include "bits/stdc++.h"
using namespace std;

int fill(int arr[], int x, int y){
  int fillTop = min(arr[x],arr[y]);
  int fillBottom = arr[y-1];
  for(int i=y-1; i>x; i--){
    arr[i] = fillTop;
  }
  return (fillTop-fillBottom)*(y-x-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  //Input and declarations
  stack<int> starts;
  int result = 0;
  int N; cin >> N;
  int h[N];
  for(int i=0; i<N; i++){
    cin >> h[i];
  }

  //Solve loop
  for(int i=0;i<N;i++){
    
    if(h[i]==0)   //small optim since we know 0 will be popped instantly anyways
      continue;
    
    if(starts.size() == 0){
      starts.push(i);
      continue;
    }

    result += fill(h,starts.top(),i);   //partial or full end
    if(h[i] >= h[starts.top()]){    //full end
      starts.pop();
      i--;   //retraverse me 
    }
    else{
      starts.push(i);
    }

  }

  cout << result;
}