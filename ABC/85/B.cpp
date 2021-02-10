#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n) cin >> vec[i];
    
    int cnt = 0;
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << vec.size() << endl;
}