#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string C;
    cin >> n >> C;
    
    vector<string> c(n);
    for(int i = 0; i < n; i++){
        c[i] = C[i];
    }
    
    int count = 0;
    for(string a: c){
        if(a == "R"){
            count++;
        }
    }
    int count_;
    for(int i = 0; i < count; i++){
        if(c[i] == "R")
            count_++;
        
    }
    
    
    cout << count - count_ << endl;
}

//できてない