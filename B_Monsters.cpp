#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x%k == 0){
                cout << i+1 << ' ';
            }else{
                v.push_back({x%k, i+1});
            }
        }
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
            if(a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });
        for(int i = 0; i < v.size(); i++){
            cout << v[i].second << ' ';
        }
        cout << '\n';
    }
}