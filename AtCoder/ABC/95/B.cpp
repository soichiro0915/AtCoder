#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> donut(n);
    int min_ = 1000;
    rep(i, n) {
        cin >> donut.at(i);
        x -= donut.at(i);
        min_ = min(min_, donut.at(i));
    }
    
    cout << n + x / min_ << endl;
    
}