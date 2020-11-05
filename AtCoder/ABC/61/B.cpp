#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> road(m);
    vector<int> town(n, 0);
    rep(i, m){
        cin >> road[i].first >> road[i].second;
        town[road[i].first - 1]++;
        town[road[i].second - 1]++;
    } 
    
    rep(i, n) cout << town[i] << endl;
}