#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <complex>
#include <string>
#include <cstring>
#include <bitset>
using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) (x).size()
auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

#define M 1000000007

int main(){
	ll n, sum;
	cin >> n >> sum;
	vector<int> c(n);
	vector<ll> m(1000001, INT32_MAX);
	m[0] = 0;
	for(int i=0; i<n; i++) cin >> c[i], m[c[i]] = 1;
	for(int i=1; i<=sum; i++){
		if(m[i] == 1) continue;
		else{
			for(int x: c){
				if(i-x >= 0) m[i] = min(m[i], m[i-x] + 1);
			}
		}
	}
	if(m[sum] != INT32_MAX) cout << m[sum] << endl;
	else cout << -1 << endl;
}