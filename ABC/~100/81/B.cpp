#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> a(n, 0);
    rep(i, n){
        cin >> A[i];
        a[A[i]-1] = a[A[i]-1] + 1;
    } 
    
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    
    sort(a.begin(), a.end());
    a.erase(remove(a.begin(), a.end(), 0), a.end());
    int ans = 0;
    bool x = true;
    if(A.size() <= k){
        cout << 0 << endl;
        x = false;
    }
    else {
        rep(i, A.size() - k){
            ans += a[i];
        }
    }
    
    if(x) cout << ans << endl;
    
}