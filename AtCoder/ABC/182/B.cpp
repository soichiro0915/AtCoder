#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int gcd(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    int max = 0;
    rep(i, n){
        for(int j = i+1; j < n; j++){
            if(max < gcd(a[i], a[j])){
                max = gcd(a[i], a[j]);
            }
        }
    }
    
    cout << max << endl;
}