#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    vector<pair<int, int>> xy(n);
    vector<int> a(n);
    rep(i, n) cin >> xy[i].first >> xy[i].second >> a[i];
        
    vector<vector<int>> wh(w, vector<int>(h));
    int sum = 0;
    rep(i, n){
        if(a[i] == 1){
            rep(j, xy[i].first+1){
                rep(k, ){
                    
                }
            }
        }
    }
    
    
}