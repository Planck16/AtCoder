#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  rep(i, 3) {
    string c;
    cin >> c;
    s += c;
  }

  string t;
  rep(i, 3) {
    string c;
    cin >> c;
    t += c;
  }
  
  vector<string> ans;
  ans.push_back(s);
  string s1 = s[1] + s[2] + s[0];
  ans.push_back(s1);
  string s2 = s[2] + s[0] + s[1];
  ans.push_back(s2);

  rep(i, ans.size()) {
    if (ans[i] == t) {
      cout << "Yes" << "\n";
      return 0;
    }
  }
  cout << "No" << "\n";
  return 0;
}