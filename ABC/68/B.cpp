#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    
    int max_ = 0;
    int ans = 1;
    for(int i = 1; i <= n; i++){
        int a = i;
        int cnt = 0;
        
        rep(j, i){
            if(a % 2 != 0) break;
            a /= 2;
            cnt++;
        }
        
        if(max_ < cnt){
            max_ = cnt;
            ans = i;
        }
    }
    
    cout << ans << endl;
}