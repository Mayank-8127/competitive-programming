#include <bits/stdc++.h>
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

#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define int long long
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
#define imin INT_MIN
#define llmin LLONG_MIN
#define llmax LLONG_MAX
#define mod 1000000007
#define max_val 100005
#define fast ios::sync_with_stdio(0); cin.tie(0); std::cout.tie(0);
#define vecin(l, n) vector<int> l(n); for(int i = 0; i < n; i++) { cin >> l[i]; }
#define vecll(l, n) vector<ll> l(n); for(ll i = 0; i < n; i++) { cin >> l[i]; }
#define setin(s, n) set<int> s; for(int i = 0; i < n; i++) { int a; cin >> a; s.insert(a); }
#define ull unsigned long long
#define ll long long
#define ld long double
bool even(int n) { return !(n & 1); }
bool odd(int n) { return n & 1; }
ll binpow(ll a, ll b, ll m = mod) { a %= m; ll res = 1; while (b > 0) { if (b & 1) res = res * a % m; a = a * a % m; b >>= 1; } return res; }
ll modInverse(ll a, ll m = mod) { return binpow(a, m-2, m); }
vll primeFactor(ll n) {vll factors;for(ll i = 2; i * i <= n; i++) {
ll cnt = 0; while(n % i == 0) {cnt++;n /= i;factors.push_back(i);
}}if(n > 1) factors.push_back(n);return factors;
}
bool isPalindrome(string s) {ll i = 0;ll j = s.size() - 1;while(i <= j) {
if(s[i] != s[j]) return false;i++;j--;}return true;
}
bool isPrime(ll n) {if(n == 1) return false;for(ll i = 2; i <= sqrt(n); i++) {
if(n % i == 0) return false;}return true;
}
ll countSetBits(ll n) {ll ans = 0;while(n) {ans++;n = n & (n - 1);}
return ans;
}
bool is_sorted(ll n, ll arr[]) {
    for(ll i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}
bool is_sorted(ll n, vector<ll> &arr) {
    for(ll i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}
ll find_gcd(ll a,ll b) {
    if(b == 0) return a;
    return find_gcd(b, a % b);
}
ll find_lcm(ll a,ll b) {
    return (a / find_gcd(a,b)) * b;
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << #x << " "; __print(x); cerr << '\n';
#else
#define debug(x...)
#endif



void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> c(n);
    set<long long> unique_vals;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        unique_vals.insert(a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    vector<long long> V(unique_vals.begin(), unique_vals.end());
    int k = V.size();

    vector<vector<long long>> dp(n, vector<long long>(k, LLONG_MAX));

    for (int j = 0; j < k; ++j) {
        if (a[0] == V[j]) {
            dp[0][j] = 0;
        } else {
            dp[0][j] = c[0];
        }
    }

    for (int i = 1; i < n; ++i) {
        long long running_min_cost = LLONG_MAX;
        for (int j = 0; j < k; ++j) {
            running_min_cost = min(running_min_cost, dp[i - 1][j]);

            long long current_cost;
            if (a[i] == V[j]) {
                current_cost = 0;
            } else {
                current_cost = c[i];
            }

            dp[i][j] = current_cost + running_min_cost;
        }
    }

    long long min_total_cost = LLONG_MAX;
    for (int j = 0; j < k; ++j) {
        min_total_cost = min(min_total_cost, dp[n - 1][j]);
    }

    cout << min_total_cost << '\n';
}

// void solve() {
//     int n;
//     cin >> n;
//     vecin(a, n);
//     vecin(b, n);
// }


signed main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fast;
    TEST {
        solve();
    }
    return 0;
}
