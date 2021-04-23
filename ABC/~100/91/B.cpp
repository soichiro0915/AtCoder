#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, m;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);
    cin >> m;
    vector<string> t(m);
    rep(i, m) cin >> t.at(i);

    map<string, int> map_;
    rep(i, n){
        if(map_.count(s.at(i))) map_[s.at(i)] += 1;
        else map_[s.at(i)] = 1;
    }
    rep(i, m){
        if(map_.count(t.at(i))) map_[t.at(i)] -= 1;
    }
    
    sort(s.begin(), s.end());
    s.erase( unique(s.begin(), s.end()), s.end() );
    
    int ans = -100;
    rep(i, s.size()){
        ans = max(ans, map_[s.at(i)]);
    }
    if(ans < 0) cout << 0 << endl;
    else cout << ans << endl;
    
}