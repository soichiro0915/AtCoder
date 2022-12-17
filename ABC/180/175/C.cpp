#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int64_t x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    
    int64_t wari = x / d;
    int64_t amari = x % d;
 
        if(wari > k){
            cout << x - (k * d) << endl;
        }else{
            int64_t nokori = k - wari;
            if(nokori % 2 == 0){
                cout << amari << endl;
            }else{
                cout << abs(amari - d) << endl;
            }
        }
        
}
