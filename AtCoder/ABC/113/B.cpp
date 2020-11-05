#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    vector<int> h(n);
    rep(i, n) cin >> h.at(i);
    
    int min_ = abs(t - h.at(0) * 0.006 -a);
    int ans = 1;
    for(int i = 1; i < n; i++){
        int diff = abs(t - h.at(i) * 0.006 - a);
        if(min_ > diff){
            min_ = diff;
            ans = i + 1;
        }
    }
    
    cout << ans << endl;
    
}