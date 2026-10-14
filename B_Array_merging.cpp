#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int> mp, mp2;
        int a = -1, c = 0, temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(a != temp){
                mp[a] = max(mp[a],c);
                a = temp;
                c = 1;
            }else{
                c++;
            }
        }
        mp[a] = max(mp[a],c);
        a = -1;
        c = 0;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(a != temp){
                mp2[a] = max(mp2[a],c);
                a = temp;
                c = 1;
            }else{
                c++;
            }
        }
        mp2[a] = max(mp2[a],c);
        int ans = 0;
        for(auto& [i,count]:mp){
            ans = max(ans,count+mp2[i]);
        }
        for(auto& [i,count]:mp2){
            ans = max(ans,count);
        }
        cout << ans << '\n';
    }
}