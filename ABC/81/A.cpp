#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int s;
    cin >> s;
    
    int cnt = 0;
    if(s / 100 == 1) cnt++;
    s %= 100;
    
    if(s / 10 == 1) cnt++;
    s %= 10;
    
    if(s == 1) cnt++;
    
    cout << cnt << endl;
}