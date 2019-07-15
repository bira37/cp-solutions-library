#include <bits/stdc++.h>

#define int long long
#define ff first
#define ss second
#define endl '\n'
#define ii pair<int, int>
#define DESYNC ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define vi vector<int>
#define vii vector< ii >
#define EPS 1e-9
#define INF 1e18
#define ROOT 1

using namespace std;

inline int mod(int n){ return (n%1000000007); }

int gcd(int a, int b){
  if(a == 0 || b == 0) return 0;
  if(b == 1) return b;
  else return gcd(b, a%b);
}

int32_t main(){
	DESYNC;
	int n;
	cin >> n;
	queue<int> q1,q2;
	int k1;
	cin >> k1;
	while(k1--){
	  int x;
	  cin >> x;
	  q1.push(x);
	}
	int k2;
	cin >> k2;
	while(k2--){
	  int x;
	  cin >> x;
	  q2.push(x);
	}
	int plays = 5000000;
	while(!q1.empty() && !q2.empty() && plays-- > 0){
	  int p1 = q1.front();
	  q1.pop();
	  int p2 = q2.front();
	  q2.pop();
	  if(p1 > p2){
	    q1.push(p2);
	    q1.push(p1);
	  }
	  else {
	    q2.push(p1);
	    q2.push(p2);
	  }
	}
	if(q1.size() > 0 && q2.size() > 0) cout << -1 << endl;
	else if(q1.size() > 0) cout << 5000000 - plays << " " << 1 <<  endl;
	else cout << 5000000 - plays << " " << 2 << endl;
}