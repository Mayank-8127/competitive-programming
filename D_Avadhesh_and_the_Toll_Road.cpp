#ifdef ANAS_K
#else
    #pragma GCC optimize("Ofast")
    // #pragma GCC target("avx,avx2,fma")
    #define debug(x...)
#endif

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<climits>
#include<queue>
#include<unordered_map>
#include<map>
#include<numeric>
#include<functional>
#include<string>
#include<cmath>
#include <cstring>
#include <list>
#include<unordered_set>
#include<set>
#include<chrono>
#include<random>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vpii vector<pair<int,int>>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mii map<int,int>
#define umap unordered_map
#define umii unordered_map<int, int>
#define umbi unordered_map<bool, int>
#define uset unordered_set

#define TEST int T;cin>>T;while(T--)
#define skip continue
#define pb push_back
#define fr(i, a, b) for(int i = a; i < b; i++)
#define fre(i, a, b) for(int i = a; i <= b; i++)
#define frd(i, a, b) for(int i = a; i > b; i--)
#define frde(i, a, b) for(int i = a; i >= b; i--)
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define sp " "
#define imax INT_MAX
#define vl vector<long long>
#define imin INT_MIN
#define llmin LLONG_MIN
#define llmax LLONG_MAX
constexpr int mod =  1000000007;
#define max_val 100005
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vecin(l, n) vector<int> l(n); for(int i = 0; i < n; i++) { cin >> l[i]; }
#define vecll(l, n) vector<ll> l(n); for(ll i = 0; i < n; i++) { cin >> l[i]; }
#define setin(s, n) set<int> s; for(int i = 0; i < n; i++) { int a; cin >> a; s.insert(a); }
#define ull unsigned long long
#define ld long double

bool even(int n) { return !(n & 1); }
bool odd(int n) { return n & 1; }

ll binpow(ll a, ll b, ll m = mod) {
    a %= m; ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m; b >>= 1;
    }
    return res;
}

ll modInverse(ll a, ll m = mod) {
    return binpow(a, m - 2, m);
}

vll primeFactor(ll n) {
    vll factors;
    for(ll i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            factors.pb(i); n /= i;
        }
    }
    if(n > 1) factors.pb(n);
    return factors;
}

bool isPalindrome(string s) {
    ll i = 0, j = s.size() - 1;
    while(i <= j) {
        if(s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

bool isPrime(ll n) {
    if(n == 1) return false;
    for (ll i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

ll countSetBits(ll n) {
    ll ans = 0;
    while(n) { ans++; n &= (n - 1); }
    return ans;
}

bool is_sorted(ll n, ll arr[]) {
    for(ll i = 1; i < n; i++) if(arr[i] < arr[i - 1]) return false;
    return true;
}
bool is_sorted(ll n, vector<ll> &arr) {
    for(ll i = 1; i < n; i++) if(arr[i] < arr[i - 1]) return false;
    return true;
}

ll find_gcd(ll a, ll b) {
    if(b == 0) return a;
    return find_gcd(b, a % b);
}
ll find_lcm(ll a, ll b) {
    return (a / find_gcd(a, b)) * b;
}
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const auto __start_time = std::chrono::high_resolution_clock::now();
void anas_cp() {
#ifndef ONLINE_JUDGE
    const auto __end_time = std::chrono::high_resolution_clock::now();
    const auto __diff = std::chrono::duration<double>(__end_time - __start_time).count();
    cerr << "Time Taken: " << __diff << "s\n";
#endif
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const int INF = 1e18;



void solve() {
    int n, k;cin>>n>>k;
    vi dist(n), toll(n);
    fr(i, 0, n) cin>>dist[i];
    fr(i, 0, n) cin>>toll[i];
    vector<vector<long long>> t(n, vector<long long>(k + 1, INF));
    t[0][0] = 0;

    fr(i, 0, n) {
        fre(j, 0, k) {
            if(t[i][j] == INF) continue;
            fr(p, i+1, n) {
                int skip_ele = p - i - 1;
                if(j + skip_ele > k) break;
                int cost = toll[i] * 1LL* (dist[p] - dist[i]);
                t[p][j + skip_ele] = min(t[p][j + skip_ele], t[i][j] + cost);
            }
        }
    }
    int ans = INF;
    fre(i, 0, k) {
        ans = min(ans, t[n - 1][i]);
    }
    cout << 2 *1LL*ans << nl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fast;
    // TEST {
        solve();
    // }
    anas_cp();
    return 0;
}
