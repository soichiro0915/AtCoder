#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    vector<pair<int,int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i).second >> vec.at(i).first;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        cout << vec.at(i).second <<" " << vec.at(i).first << endl;
    }
}
