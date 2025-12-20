#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mx = 0;
    int c = 0;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(mp[x] && i - mp[x] <= c){
            c = i - mp[x] - 1;
        }
        mp[x] = i;
        c++;
        mx = max(mx, c);
    }
    cout << mx;
}