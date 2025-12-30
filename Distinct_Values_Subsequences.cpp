#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    long long count = 1;
    for(auto it: mp){
        if(it.second > 0)count = (count*(it.second+1))%1000000007;
    }
    count--;
    if(count == -1) count = 1000000007;
    cout << count;
}