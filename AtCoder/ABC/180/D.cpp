#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    long long x, y;
    long long a, b;
    cin >> x >> y >> a >> b;
    long long keiken = 0;
    bool tuduki = true;
    while(tuduki){
        if(y > a * x){
            x *= a;
            keiken++;
        }else if(y > x + b){
            x += b;
            keiken++;
        }else if(y < a * x || y < x + b){
            tuduki = false;
        }
    } 
    
    cout << keiken << endl;;
}