#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i += 2){
        cout << s[i];
    }
    cout << endl;
    
}