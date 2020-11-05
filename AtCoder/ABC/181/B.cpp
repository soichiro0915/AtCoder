#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    long long n;
    cin >> n;
    
    vector<pair<long long, long long>> ab(n);
    rep(i, n) cin >> ab[i].first >> ab[i].second;
    
    long long sum = 0;
    for(long long i = 0; i < n; i++){ 
        sum += (ab[i].second - ab[i].first + 1) * (ab[i].first + ab[i].second) * 0.5;
        
    }
    
    cout << sum << endl;
}