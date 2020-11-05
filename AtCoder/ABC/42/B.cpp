#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, l;
    cin >> n >> l;
    vector<string> vec(n);
    rep(i, n) cin >> vec.at(i);
    
    sort(vec.begin(), vec.end());
    rep(i, n) cout << vec.at(i);
    cout << endl;
}