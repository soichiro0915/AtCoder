#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    long long n;
    cin >> n;
    
    
    vector<long long> vec;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;;
            if (i * i != n) vec.push_back(n / i);
        }
    }
    sort(vec.begin(), vec.end());
    rep(i, vec.size()) cout << vec[i] << endl;

}