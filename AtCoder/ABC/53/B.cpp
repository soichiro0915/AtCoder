#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string s;
    cin >> s;
    
    vector<int> a;
    vector<int> z;
    
    rep(i, s.size()){
        if(s.at(i) == 'A') a.push_back(i);
        if(s.at(i) == 'Z') z.push_back(i);
    }
    
    cout << z.at(z.size()-1) - a.at(0) + 1<< endl;
}