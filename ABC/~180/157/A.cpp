#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    
    if(n % 2 == 0) cout << n / 2 << endl;
    else cout << n/2 + 1 << endl;

}