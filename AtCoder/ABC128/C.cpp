#include <bits/stdc++.h>

#define int long long
#define double long double
#define ff first
#define ss second
#define endl '\n'
#define ii pair<int, int>
#define mp make_pair
#define mt make_tuple
#define DESYNC ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define vi vector<int>
#define vii vector< ii >
#define EPS 1e-9
#define INF 1e18
#define ROOT 1
#define M 1000000007
const double PI = acos(-1);

using namespace std;

inline int mod(int n, int m){ int ret = n%m; if(ret < 0) ret += m; return ret; }

int gcd(int a, int b){
  if(a == 0) return b;
  else return gcd(b%a, a);
}

int32_t main(){
  DESYNC;
  int n,m;
  cin >> n >> m;
  vector<int> s[n];
  for(int i=0; i<m; i++){
    int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int x;
      cin >> x;
      x--;
      s[x].pb(i);
    }
  }
  int p[m];
  for(int i=0; i<m; i++){
    cin >> p[i];
  }
  int ans = 0;
  for(int msk = 0; msk < (1<<n); msk++){
    vector<bool> on(m);
    for(int i=0; i<m; i++) on[i] = false;
    for(int i=0; i<n; i++){
      if(msk & (1<<i)){
        for(int x : s[i]) on[x] = !on[x];
      }
    }
    int cnt = 0;
    for(int i=0; i<m; i++) cnt += (on[i] == p[i]);
    if(cnt == m) ans++;
  }
  cout << ans << endl;
}

