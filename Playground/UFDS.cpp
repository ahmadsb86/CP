#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class DisjSet {
    vi p, r, s;
    int n, c;

public:

    DisjSet(int x)
    {
      p.assign(x,0);
      for (int i = 0; i < x; i++) {
        p[i] = i;
      }
      r.assign(x,0);
      s.assign(x,1);
      c = x;
    }

    // Finds set of given item x without path compression
    int find(int x){
      return p[x] != x ? p[x] = find(p[x]) : x;
    }

    bool isSameSet(int x, int y){ return find(x) == find(y);}
    int sets() {return c;}
    int size(int x){return s[find(x)];}

    // Do union of two sets represented
    void Union(int x, int y){

      int xRep = find(x);
      int yRep = find(y);

      if (xRep == yRep) return;

      if (r[xRep] < r[yRep]) swap(xRep, yRep);
      p[yRep] = xRep;

      if(r[xRep] == r[yRep]) r[xRep ++];
      s[y] += s[x];
      c --;
    }
};

int main()
{
    DisjSet obj(5);
    obj.Union(0, 2);
    obj.Union(4, 2);
    obj.Union(3, 1);
    obj.Union(2, 3);

    if (obj.find(4) == obj.find(0)) cout << "Yes\n";
    else cout << "No\n";

    if (obj.find(4) == obj.find(2)) cout << "Yes\n";
    else cout << "No\n";

    if (obj.find(1) == obj.find(0)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
