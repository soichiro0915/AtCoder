#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, a;
    cin >> n >> a;
    
    int remainder = n % 500;
    if(remainder <= a) cout << "Yes" << endl;
    else cout << "No" << endl;

}