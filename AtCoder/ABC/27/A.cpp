#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    rep(i, n) cin >> vec.at(i);
    
    sort(vec.begin(), vec.end());
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        x -= vec[i];
        if (x < 0) break;
        if (i == n - 1 && x > 0) break;
        ans++;
    }
    
    cout << ans << endl;
}