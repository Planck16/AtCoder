#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const int inf = INT_MAX;
const int mod = 1000000007;

int main() {
  string s, t;
  cin >> s >> t;
  int cnt = 0;
  rep(i, s.size()) if (s[i] != t[i]) cnt++;
  cout << cnt << endl;
}