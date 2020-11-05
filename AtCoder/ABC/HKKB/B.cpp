#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> vec(h);
    rep(i, h) cin >> vec[i];
    
    int cnt = 0;
    rep(i, h){
        rep(j, w-1){
            if(vec[i][j] == '.' && vec[i][j+1] == '.') cnt++;
        }
    }
    
    rep(i, w){
        rep(j, h-1){
            if(vec[j][i] == '.' && vec[j][i+1] == '.') cnt++;
        }
    }
    
    
    cout << cnt << endl;
}