#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  int ans;
  for(int i = 1; i <= 1000000000; i++){
    sum += i;
    if(sum  >= n){
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}
