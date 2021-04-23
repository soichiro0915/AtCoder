#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, y;
    cin >> n >> y;
    
    bool x = false;
    for(int i = 0; i < (y / 10000) + 1; i++){
        for(int j = 0; j < (y / 5000) + 1; j++){
            n -= i + j;
            y -= (i* 10000) + (j*5000);
            if(y == n * 1000){
                cout << i << ' ' << j << ' ' << n << endl;
                x = true;
                break;
             } 
        }
        if(x) break;
    }
    
    if(!(x)) cout << "-1 -1 -1" << endl;
}