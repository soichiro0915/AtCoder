#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    char s, t;
    cin >> s >> t;
    if(s == 'Y'){
        t = toupper(t);
        cout << t << endl;
    }else cout << t << endl;
}