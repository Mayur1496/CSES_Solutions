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
	ll n;
	cin >> n;
	ll ways[n+10];
	ways[0] = 0;
	ways[1] = 1;
	for(int i=2; i<=n; i++){
		int k = i-1;
		int times = 6;
		if(i<=6)ways[i] = 1;
		else ways[i] = 0;

		while(k > 0 && times--){
			ways[i] = (ways[i] + ways[k])%M;
			k--;
		}
	}
	cout << ways[n];
}