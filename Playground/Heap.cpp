#include "/Users/user/stdc++.h"
using namespace std;

int main(){
  priority_queue<int> a;

  cout << "Created " << endl;
  a.push(5);
  a.push(10);
  a.push(15);
  a.push(20);
  cout << "Filled" <<endl;

  cout << "Top: " << a.top() << endl;
  a.pop();
  cout << "Popped" << endl;
  cout << "Top: " << a.top() << endl;
  cout << "Size: " << a.size() << endl;
  a.empty();
  cout << "Emptied" << endl;


  cout << "\n\n\n\n\n";
}
