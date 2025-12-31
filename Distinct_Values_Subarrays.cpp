#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    long long c = 0;
    int last_index = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(mp.find(x) != mp.end() && mp[x] > last_index){
            last_index = mp[x];
        }
        mp[x] = i;
        c += (i-last_index);
    }
    cout << c;
}