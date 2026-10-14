#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    long long ans = 0;
    int mn1 = INT_MAX, mn0 = INT_MAX;
    while(n--){
        int x;
        cin >> x;
        vector<int> v(x);
        for(int i = 0; i < x; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ans += v[1];
        mn1 = min(mn1,v[1]);
        mn0 = min(mn0, v[0]);
    }
    // ans = ans - max(mn0,mn1) + min(mn0,mn1);
    ans = ans - mn1 + mn0;
    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}