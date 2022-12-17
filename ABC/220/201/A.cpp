#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

void fun(vector<int> a){
    rep(i, 3){
        int sum = 0;
        rep(j, 3){
            if(i != j) sum += a[j];
        }
        if(sum == a[i]*2){
            cout << "Yes" << endl;
            return ;
        } 
    }
    cout << "No" << endl;
}

int main() {
    vector<int> a(3);
    rep(i, 3) cin >> a[i];
    
    fun(a);
}