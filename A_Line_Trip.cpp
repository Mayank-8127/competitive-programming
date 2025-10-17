#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n,m,x, mx = 0;
        cin >> n >> m;
        vector<int> a = {0};
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
            mx = max(mx,a[i+1] - a[i]);
        }
        mx = max(mx, (m - a[a.size()-1])*2);
        cout << mx << "\n";
    }
}