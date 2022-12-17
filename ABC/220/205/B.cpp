#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> ans(n);
  rep(i, n) {
    cin >> a[i];
    ans[i] = i+1;
  }

  sort(a.begin(), a.end());
  if(a == ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}
