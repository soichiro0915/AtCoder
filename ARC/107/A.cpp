#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long sum = 0;
    
    rep(i, a){
        rep(j, b){
            rep(k, c){
                sum += (i+1) * (j+1) * (k+1);
                sum %= 998244353;
            }
        }
    }
    
    cout << sum << endl;
    
}