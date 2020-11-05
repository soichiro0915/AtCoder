#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i, n) cin >> vec.at(i);
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int sum = 0;
    rep(i, k) sum += vec.at(i);
    cout << sum << endl;
}