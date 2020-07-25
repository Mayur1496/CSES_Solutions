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

int main(){
	string s;
	cin >> s;
	int count = 1, res = INT32_MIN;
	for(int i=0; i < sz(s); i++){
		if(i+1 < sz(s) && s[i] == s[i+1]){
			++count;
		}else{
			count = 1;
		}
		res = max(res, count);
	}
	cout << res << endl;
}