#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    rep(i, n) cin >> vec[i];
    
    long long man = 0;
    long long yu = 0;
    long long tyebi = -100000;
    
    rep(i, n) {
        man += abs(vec[i]);
        yu += vec[i] * vec[i];
        if(tyebi < abs(vec[i])) tyebi = abs(vec[i]);
    }
    
    long double yuku = sqrt(yu);
    cout << man << endl ;
    cout << setprecision(20) << yuku << endl;
    cout << tyebi << endl;
}