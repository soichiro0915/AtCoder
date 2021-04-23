#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string s;
    cin >> s;
    int count ;
    for(int i = 0; i < 3; i++){
        if(s[i] == 'o') count++;
    }

    cout << 700 + count*100 << endl;
}
