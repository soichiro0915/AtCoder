#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, ma, mi;
  cin >> A >> B >> C;
    ma = max(A, B);
    ma = max(ma, C);
    mi = min(A, B);
    mi = min(mi, C);
    cout << ma - mi << endl;
}
