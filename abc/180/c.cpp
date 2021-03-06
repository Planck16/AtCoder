#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
const int inf = 1e9;
const int mod = 1e9+7;

vector<ll> calpfact(ll n) {
  vector<ll> pfact;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    pfact.push_back(i);
    if (n / i != i) pfact.push_back(n / i);
  }
  sort(all(pfact));
  return pfact;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> pfact = calpfact(n);
  for (auto p : pfact) cout << p << endl;
  return 0;
}