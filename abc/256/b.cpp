#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdint>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define rng(a) (a).begin(),(a).end()
#define rrng(a) (a).rbegin(),(a).rend()
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;
// using mint = modint1000000007;


int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll p = 0;
  vector<ll> pos(4);

  rep(i, n) {
    ++pos[0];

    rep(j, 4) {
      if (pos[j] == 0) continue;

      if (j+a[i] >= 4) {
        p += pos[j];
        pos[j] = 0;
      }
      else {
        pos[j + a[i]] = pos[j];
        pos[j] = 0;
      }
    }

    rep(j, 4) {
      if (j) cout << " ";
      cout << pos[j];
    }
    cout << "\n";
  }

  cout << p << "\n";
  return 0;
}