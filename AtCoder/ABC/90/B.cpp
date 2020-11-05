#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        int num = i;
        int c = num % 10;
        num /= 10;
        int d = num % 10;
        num /= 10;
        int e = num % 10;
        num /= 10;
        int f = num % 10;
        int g = num /  10;
        
        if(c == g && d == f) cnt++;
    }
    
    cout << cnt << endl;
}