#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  
  int num = r * 100 + g * 10 + b;
  if(num % 4 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  

}