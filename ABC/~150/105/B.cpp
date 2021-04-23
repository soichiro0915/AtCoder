#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    
    bool a = false;
    rep(i, n+1){
        for(int j = 0; i + j < n+1; j++){
            if(4*i + 7*j == n){
                cout << "Yes" << endl;
                a = true;
                break;
            }
        }
        if(a) break;
    }
    
    if(!(a)) cout << "No" << endl;
}