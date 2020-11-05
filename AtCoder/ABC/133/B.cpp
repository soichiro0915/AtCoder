#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int>> vec(n, vector<int>(d));
    rep(i, n){
        rep(j, d) cin >> vec[i][j];
    }
    
    set<int> a;
    rep(i, 200) a.insert(i * i);
    bool b = false;
    int cnt = 0;
    rep(i, n){
        for(int j = i + 1; j < n; j++){
            int sum = 0;
            rep(k, d){
                sum += (vec[i][k] - vec[j][k]) * (vec[i][k] - vec[j][k]);
            }
            if(a.count(sum)){
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
}