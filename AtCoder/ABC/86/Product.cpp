#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
  int a, b;
  cin >> a >> b;
  
  int c = a * b;
  if(c % 2 == 0) cout << "Even" << endl;
  else cout << "Odd" << endl;

}