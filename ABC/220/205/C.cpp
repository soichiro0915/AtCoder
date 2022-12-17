#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(a == 0 && b != 0){
    if(b > 0){
      cout << "<" << endl;
    }else {
      if(c % 2 == 0){
        cout << "<" << endl;
      }else cout << ">" << endl;
    }
  }
  else if(b == 0 && a != 0){
    if(a > 0){
      cout << ">" << endl;
    }else {
      if(c % 2 == 0){
        cout << ">" << endl;
      }else cout << "<" << endl;
    }
  }
  else if(a == 0 && b == 0){
    cout << "=" << endl;
  }
  else if(a > 0 && b > 0){
    if(log(a) < log(b)) cout << "<" << endl;
  else if(log(a) > log(b)) cout << ">" << endl;
  else cout << "=" << endl;
  } else if(a < 0 && b > 0) {
    if(c % 2 == 0){
      if(log(-a) < log(b)) cout << "<" << endl;
      else if(log(-a) > log(b)) cout << ">" << endl;
      else cout << "=" << endl;
    } else {
      cout << "<" << endl;
    }
  } else if(a > 0 && b < 0) {
    if(c % 2 == 0){
      if(log(a) < log(-b)) cout << "<" << endl;
      else if(log(a) > log(-b)) cout << ">" << endl;
      else cout << "=" << endl;
    } else {
      cout << ">" << endl;
      }
  } else if(a < 0 && b < 0){
    if(c % 2 == 0){
      if(-a < -b) cout << "<" << endl;
      else if(-a > -b) cout << ">" << endl;
      else cout << "=" << endl;
    }
    else{
      if(-a > -b) cout << "<" << endl;
      else if(-a < -b) cout << ">" << endl;
      else cout << "=" << endl;
    }
  }
}

