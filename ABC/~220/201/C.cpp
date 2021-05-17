#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main(){
    string S; cin >> S;
    int ans = 0;
    rep(i, 10000){
        vector<int> a(10);
        int X = i;
        rep(j, 4){
            a[X%10] = 1;
            X /= 10;
        }
        bool ok = true;
        rep(j, 10){
            if(S[j]=='o' && a[j] != 1) ok = false;
            if(S[j]=='x' && a[j] != 0) ok = false;
        }
        if(ok) ans++;
    }
    cout << ans << endl;
}
