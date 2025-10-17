#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n, m, x;
        cin >> n >> m;
        vector<int> a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        set<int> s;
        for(int i = 1; i <= n; i++){
            s.insert(i);
        }
        for(int i = 0; i < n; i++){
            s.erase(a[i]);
        }
        vector<int> b(s.begin(), s.end());
        vector<int> ans;
        for(int i = 0; i < m; i++){
            if(i < b.size()){
                ans.push_back(b[i]);
                cout << b[i] << ' ';
            }else{
                ans.push_back(a[i-b.size()]);
                cout << ans[i] << ' ';
            }
        }
        cout << '\n';
    }
}