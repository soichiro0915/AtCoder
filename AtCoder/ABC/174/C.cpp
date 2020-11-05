#include <bits/stdc++.h>
using namespace std;


 
int main() {
    int64_t k;
    cin >> k;
    
    int64_t bunsi = 7, n = 1000000, count = 1;
    for(int i = 0; i < n; i++){
        if(k % 2 == 0){
            cout << -1 << endl;
            break;
        }
        else if(bunsi % k == 0){
            cout << count << endl;
            break;
        }
        else{
            bunsi += 7 * (pow(10, i + 1));
            count++;
            
        }
    }
}
//できてない