#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        bool x = true;
        int num = i;
        while(x){
            sum += num % 10;
            num -= num % 10;
            num /= 10;
            if(num == 0) x = false;
        }
        if(sum >= a && sum <= b) ans += i;
    }
    
    cout << ans << endl;
}