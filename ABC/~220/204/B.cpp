#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  rep(i, n){
    int a;
    cin >> a;
    if(a > 10) ans += a - 10;
  }

  cout << ans << endl;
}