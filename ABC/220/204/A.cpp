#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y;
  cin >> x >> y;

  if ((x == 0 && y == 0) || (x == 2 && y == 1) || (x == 1 && y == 2)) cout << 0 << endl;
   else if ((x == 1 && y == 1) || (x == 0 && y == 2) || (x == 2 && y == 0)) cout << 1 << endl;
   else if ((x == 2 && y == 2) || (x == 0 && y == 1) || (x == 1 && y == 0)) cout << 2 << endl;
}