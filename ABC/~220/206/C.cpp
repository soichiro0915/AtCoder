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
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());
  int ans = 0;
  for(int i = 0; i < n; i++){
    int j = i;
    if(i+1 < n){
      j = i+1;
    }
    while(a[i] == a[j]){
      j++;
    }
    ans += (n - j) * (j - i);
    i = j-1;
  }

  cout << ans << endl;
}

//間違いがある