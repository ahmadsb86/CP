#include "/Users/user/stdc++.h"
int main(){
  int arr[] = {1,2,3,2,1}, len = sizeof(arr)/sizeof(arr[0]), xum;
  for (int i = 0; i < len ; i++) xum ^= arr[i];
  std::cout << xum << "\n";
}
