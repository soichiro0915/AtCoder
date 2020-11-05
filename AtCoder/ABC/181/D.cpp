#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int s;
    cin >> s;
    
    vector<int> vec;
    while(s != 0) {
        vec.push_back(s % 10);
        s = (s - s%10) / 10;
    }
    
    bool a = true;
    if(vec.size() >= 3){
        rep(i, vec.size()){
            for(int j = i+1; j < vec.size(); j++){
                for(int k = j+1; k < vec.size(); k++){
                    if((100*vec[i] + 10*vec[j] + vec[k]) % 8 == 0){
                        a = false;
                        break;
                    }else if((100*vec[i] + 10*vec[k] + vec[j]) % 8 == 0){
                        a = false;
                        break;
                    }else if((100*vec[k] + 10*vec[i] + vec[j]) % 8 == 0){
                        a = false;
                        break;
                    }else if((100*vec[k] + 10*vec[j] + vec[i]) % 8 == 0){
                        a = false;
                        break;
                    }else if((100*vec[j] + 10*vec[k] + vec[i]) % 8 == 0){
                        a = false;
                        break;
                    }else if((100*vec[j] + 10*vec[i] + vec[k]) % 8 == 0){
                        a = false;
                        break;
                    }
                }
                if(!(a)) break;
            }
            if(!(a)) break;
        }
    } else if(vec.size() == 1){
        if(s % 8 == 0) {
            a = false;
              
        }
    } else {
        if((vec[0]*10 + vec[1]) % 8 ==0 || (vec[1]*10 + vec[10]) % 8 ==0){
            a = false;
             
        }
    }
    if(a) cout << "No" << endl;
    else cout << "Yes" << endl;
}

未完