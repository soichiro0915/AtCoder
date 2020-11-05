#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    
    
    bool a = false;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j  < 10; j++){
            if(i*j == n){
                cout << "Yes" << endl;
                a = true;
                break;
            }
        }
        if(a) break;
    }
    
    if(!(a)) cout << "No" << endl;
}