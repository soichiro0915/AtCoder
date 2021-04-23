#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> xy(n);
    rep(i, n) cin >> xy[i].first >> xy[i].second;
    
    vector<int> vec(n);
    rep(i, n) vec[i] = i+1;
    
    set<int> katamuki;
    bool a = true;
    int i = 0;
    while(a){
        
        for(int j = i + 1; j < n; j++){
            
            for(int l = j + 1; l < n; l++){
                
                if(xy[i].first - xy[j].first == 0 && xy[j].first - xy[l].first == 0){
                    
                        cout << "Yes" << endl;
                        a = false;
                        break;
                    
                
                }else if((xy[i].second - xy[j].second) * (xy[l].first - xy[j].first)  == (xy[l].second - xy[j].second) * (xy[i].first - xy[j].first)){
                    cout << "Yes" << endl;
                        a = false;
                        break;
                }
            }
            
            if(!(a)) break;
        }
        
        i++;
        if(i >= n) {
            cout << "No" << endl;
            a = false;
        }
    }
    
}