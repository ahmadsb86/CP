#include <bits/stdc++.h>
using namespace std;

void pour(int& a, int& bc, int &bm){
  int es = bc-bm;
  bm += min(a, es);
  a = max(0,a-es);
}

int main(){
   int arr[3][2]; int a;
   ifstream fin("mixmilk.in"); ofstream fout("mixmilk.out");
   for(int i = 0; i<6; i++) {
     fin >> a; arr[i/2][i%2] = a;
   }
   for (int i = 0; i < 33; i++) {
     pour(arr[0][1], arr[1][0], arr[1][1]);
     pour(arr[1][1], arr[2][0], arr[2][1]);
     pour(arr[2][1], arr[0][0], arr[0][1]);
   }pour(arr[0][1], arr[1][0], arr[1][1]);
   for (int i = 0; i < 3; i++) {
     fout  << arr[i][1] << endl;
   }
}
