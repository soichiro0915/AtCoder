#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, k;
    cin >> n >> k;
    
    int ans = 0;
    while (n > 0) {
        n /= k;
        ans++;
    }
 
    cout << ans << endl;
    
}