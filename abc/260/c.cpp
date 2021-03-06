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

  ll n, x, y;
  cin >> n >> x >> y;

  ll ans = 0;
  ll red = 0;
  ll blue = 1;

  map<P, ll> memo;

  auto dfs = [&](auto dfs, ll level, ll color, ll cnt) -> void {
    // level1の青
    if (level == 1 and color == 1) {
      ans += cnt;
      return;
    }

    // level1の赤
    if (level == 1 and color == red) return;

    // 赤
    if (color == red) {
      // 赤1
      dfs(dfs, level-1, red, cnt);
      // 青x
      dfs(dfs, level, blue, x*cnt);
    }

    // 青
    else {
      // 赤1
      dfs(dfs, level-1, red, cnt);
      // 青y
      dfs(dfs, level-1, blue, y*cnt);
    }
  };
  dfs(dfs, n, red, 1);

  cout << ans << "\n";
  return 0;
}