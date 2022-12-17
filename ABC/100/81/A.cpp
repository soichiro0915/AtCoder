#include <bits/stdc++.h>111
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int s;
    cin >> s;
    int s1 = s / 100;
    s -= s1 * 100;
    int s2 = s / 10;
    s -= s2 * 10;
    cout << s1 + s2 + s << endl;
}
