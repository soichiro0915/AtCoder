#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> data(n);
    rep(i, n) cin >> data[i].second >> data[i].first;
    
    sort(data.begin(), data.end());
    reverse(data.begin(), data.end());
    cout << data[1].second << endl;
}