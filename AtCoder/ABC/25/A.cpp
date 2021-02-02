#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
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