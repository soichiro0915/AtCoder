#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    
    vector<int> vec;
    rep(i, 200000) vec.push_back(i);
    
    rep(i, n){
        vec.erase(remove(vec.begin(), vec.end(), p[i]), vec.end());
        cout << vec[0] << endl;
    }
    
    
}