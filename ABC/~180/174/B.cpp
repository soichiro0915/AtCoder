#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
int main() {
    int n, d;
    cin >> n >> d;
    
    int64_t x, y, count = 0;
    double_t num;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        num = sqrt(x * x + y * y);
        if(num <= d){
            count++;
        }
    }
    
    cout << count << endl;
}