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
    int m, n, a, b;
    cin >> m >> n >> a >> b;

    cout << 1 << sp << 1 << sp << m << sp << n << nl;
    // int x = a+b;
    
    // int c1 = abs(x-2), c2 = abs(x-1-n), c3 = abs(x-1-m), c4 = abs(x-m-n);
    
    // int ans1 = max(c1,max(c2,max(c3,c4)));
    // int x1 = 1, x2 = 1;
    
    // if(ans1 == c1){
    //     cout << 1 << sp << 1 << sp;
    // }
    // else if(ans1 == c2){
    //     cout << 1 << sp << n << sp;
    //     x2 = n;
    // }
    // else if(ans1 == c3){
    //     cout << m << sp << 1 << sp;
    //     x1 = m;
    // }
    // else if(ans1 == c4){
    //     cout << m << sp << n << sp;
    //     x1 = m;
    //     x2 = n;
    // }

    // int d1 = min(c1, abs(x1+x2-2));
    // int d2 = min(c2, abs(x1+x2-1-n));
    // int d3 = min(c3, abs(x1+x2-1-m));
    // int d4 = min(c4, abs(x1+x2-m-n));
    // int ans2 = max(d1,max(d2,max(d3,d4)));

    // int x3 = 1, x4 = 1;
    
    // if(ans2 == d1){
    //     cout << 1 << sp << 1 << nl;
    // }
    // else if(ans2 == d2){
    //     cout << 1 << sp << n << nl;
    //     x4 = n;
    // }
    // else if(ans2 == d3){
    //     cout << m << sp << 1 << nl;
    //     x3 = m;
    // }
    // else if(ans2 == d4){
    //     cout << m << sp << n << nl;
    //     x3 = m;
    //     x4 = n;
    // }
    // cout << x1 << sp << x2 << sp << x3 << sp << x4 << nl;
    
    // int c1 = min(abs(x-1-n),abs(x-2));
    // int c2 = max(abs(x-1-n),abs(x-2));
    // if(abs(x-1-m) > c2){
    //     c1 = c2;
    //     c2 = abs(x-1-m);
    // }else if(abs(x-1-m) > c1){
    //     c1 = abs(x-1-m);
    // }
    // if(abs(x-m-n) > c2){
    //     c1 = c2;
    //     c2 = abs(x-m-n);
    // }else if(abs(x-m-n) > c1){
    //     c1 = abs(x-m-n);
    // }
    // if(c1 == abs(x-2)) cout << 1 << sp << 1 << sp;
    // else if(c1 == abs(x-1-n)) cout << 1 << sp << n << sp;
    // else if(c1 == abs(x-1-m)) cout << m << sp << 1 << sp;
    // else if(c1 == abs(x-n-m)) cout << m << sp << n << sp;
    // if(c2 == abs(x-2)) cout << 1 << sp << 1 << nl;
    // else if(c2 == abs(x-1-n)) cout << 1 << sp << n << nl;
    // else if(c2 == abs(x-1-m)) cout << m << sp << 1 << nl;
    // else if(c2 == abs(x-n-m)) cout << m << sp << n << nl;
}


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
