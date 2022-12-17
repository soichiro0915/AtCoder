#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n) cin >> vec.at(i);
    
    int bob = 0, alice = 0;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    
    rep(i, n){
        if(i % 2 == 0) alice += vec.at(i);
        else bob += vec.at(i);
    }
    
    cout << alice - bob << endl;
}