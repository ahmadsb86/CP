#include "/Users/user/stdc++.h"
using namespace std;




void printB(int num){
    int size = sizeof( int);
    for(int i = size*8-1; i>= 0; i--){
        printf("%u",(num >>i) & 1 );
    }
    printf("\n");
}

int main(){
  int n = 58;
  int a = 0,b = 0;

  bool first = true;
  int size = sizeof( int);
  for(int i = size*8-1; i>= 0; i--){
      if((n & (1 << i)) > 0){
        if(first){
          b = b | (1<<i);
          first = false;
        }
        else{
          a = a | (1<<i);
          first = true;
        }
      }
  }

  std::cout << "N:" << '\n';
  printB(n);


  std::cout << "A:" << '\n';
  printB(a);

  std::cout << "B:" << '\n';
  printB(b);


  cout << "\n\n\n\n\n";

}
