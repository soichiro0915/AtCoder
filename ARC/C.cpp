#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<int> vec(2*n);
    vector<int> c(n);
    vector<int> a_;
    vector<int> b_(n);
    int cnt_1 = 0;
    vector<int> kazu;
    
    for(int i = 0; i < 2*n; i += 2){
        cin >> vec[i] >> vec[i+1];
        kazu.push_back(vec[i]);
        kazu.push_back(vec[i+1]);
        if (vec[i] == -1) {
            a_.push_back(i);
            cnt_1++;
        }
        if(vec[i+1] == -1) {
            b_.push_back(i+1);
            cnt_1++;
        }
        c[i] = vec[i+1] - vec[i] -1;
    }
    
    sort(kazu.begin(), kazu.end());
    reverse(kazu.begin(), kazu.end());
    rep(i, cnt_1) kazu.pop_back();
    
    vector<int> retu(2*n);
    rep(i, 2*n) retu[i] = i+1;
    
    if(cnt_1 == 0){
        
    }
    
    
}