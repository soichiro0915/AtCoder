#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l.at(i);
    
    int cnt = 0;
    
    rep(i, n){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(l.at(i) != l.at(j) && l.at(i) != l.at(k) && l.at(j) != l.at(k) && l.at(i) < l.at(j) + l.at(k) && l.at(j) < l.at(i) + l.at(k) && l.at(k) < l.at(j) + l.at(i) ) {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
}