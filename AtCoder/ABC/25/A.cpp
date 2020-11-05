#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int keta_sum(int num){
    int sum = 0;
    bool x = true;
    while(x){
        sum += num % 10;
        num /= 10;
        if(num == 0) x = false;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    int min = 100000;
    for(int i = 1; i <= n / 2; i++){
        int a = keta_sum(i);
        int b = keta_sum(n - i);
        if(min > a + b) min = a + b;
    }
    cout << min << endl;
}