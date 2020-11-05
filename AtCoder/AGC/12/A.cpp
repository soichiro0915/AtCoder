#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> vec(3*n);
    rep(i, 3*n) cin >> vec.at(i);
    
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    
    long long ans = 0;
    for(int i = 0; i < 2 * n; i += 2){
        ans += vec.at(i + 1);
    }
    cout << ans << endl;
    
}