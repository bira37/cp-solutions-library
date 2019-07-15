#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//#pragma GCC optimize("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define endl '\n'
#define pb push_back
#define ii pair<int,int>
#define vii vector< ii >
#define LL_MAX LLONG_MAX
#define LL_MIN LLONG_MIN
#define ff first
#define ss second
#define int long long

using namespace std;
using namespace __gnu_pbds;

inline int mod(int n){ return (n%1000000007); } 

//////////////////////////////////////////////STL - Ordered Set////////////////////////////////////////////
typedef tree<
int, //change for pair<int,int> to use like multiset
null_type,
less<int>, //change for pair<int,int> to use like multiset
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int differ = 0;
//////////////////////////////////////////////EXTRAS///////////////////////////////////////////////////////

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,k;
	cin >> n >> k;
	if(n == 0){
		cout << 1 << " " << 0 << endl;
		return 0;
	}
	int best = (int)(1e18)+1;
	int ans = 0;
	int idx = 0;
	for(int i=1; i<=k; i++){
		int q;
		cin >> q;
		if(n%q < best){
			best = n%q;
			ans = n/q;
			idx = i;
		}
	}
	if(best == n){
		cout << 1 << " " << 0 << endl;
		return 0;
	}
	cout << idx << " " << ans << endl;
}