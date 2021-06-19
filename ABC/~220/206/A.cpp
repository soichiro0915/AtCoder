#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  n *= 1.08;

  string ans;
  if(n < 206) ans = "Yay!";
  else if(n == 206) ans = "so-so";
  else ans = ":(";

  cout << ans << endl;
}
