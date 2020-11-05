#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x;
    cin >> x ;
    if (x == 1){
        int price, N;
        cin >> price >> N;
        cout << N * price << endl;
    }
    else if(x == 2){
        string text;
        int price, N;
        cin >> text >> price >> N;
        cout << text << "!" << endl;
        cout << N * price << endl;
    }
}
