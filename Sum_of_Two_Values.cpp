#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(mp.find(s-x) != mp.end()){
            cout << mp[s-x] << ' ' << i+1;
            return 0;
        }
        mp[x] = i+1;
    }
    cout << "IMPOSSIBLE";
}