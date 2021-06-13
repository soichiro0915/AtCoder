#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  ll ac, bc;
  cin >> a >> b >> c;



  if(log(a) < log(b)) cout << "<" << endl;
  else if(log(a) > log(b)) cout << ">" << endl;
  else cout << "=" << endl;
}
