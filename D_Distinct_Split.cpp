#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> s1,s2;
        vector<int> v1(n,0),v2(n,0);
        for(int i = 0; i < n; i++){
            s1.insert(s[i]);
            v1[i] = s1.size();
        }
        for(int i = n-1; i >= 0; i--){
            s2.insert(s[i]);
            v2[i] = s2.size();
        }
        int mx = 0;
        for(int i = 0; i < n-1; i++){
            mx = max(mx, v1[i]+v2[i+1]);
        }
        cout << mx << '\n';
    }
}