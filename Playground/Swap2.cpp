#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

void swap2(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}


int main(){
  int a = 10; int b = 20;
  swap2(a,b);
}
