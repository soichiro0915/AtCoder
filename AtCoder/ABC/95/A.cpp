#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string s;
    cin >> s;
    
    int sum = 700;
    rep(i, 3){
        if(s.at(i) == 'o') sum += 100;
    }
    
    cout << sum << endl;
}