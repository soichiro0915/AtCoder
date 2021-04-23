#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    
    int cnt = 0;
    rep(i, a+1){
        rep(j, b+1){
            for(int k = 0; k < c+1; k++){
                if(i*500 + j*100 + k*50 == x) {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
}