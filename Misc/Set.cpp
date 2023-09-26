#include <bits/stdc++.h>
using namespace std;

void run(int x);

int main(){


  time_t start, end;
  time(&start);
  ios_base::sync_with_stdio(false);

  run(10000000);

  time(&end);

  double time_taken = double(end - start);
  cout << "Completed Program in: " << time_taken;
  cout << " seconds." << endl;

  cout << "\n\n\n\n\n";
}

void run(int x) {
  set<int> juice;
  for (int i = x; i >= 0; i--) {
    juice.insert(i);
  }
}
