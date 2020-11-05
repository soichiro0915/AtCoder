#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string s;
    cin >> s;
    
    vector<int> vec(26, 0);
    
    rep(i, s.size()){
        int num = (int)s.at(i) - 97;
        vec.at(num) += 1;
    }
    
    int cnt = 0;
    rep(i, 26){
        if(vec.at(i) == 0){
            cout << (char)(i + 97) << endl;
            break;
        } else cnt++;
    }
   
    if(cnt == 26) cout << "None" << endl;
}