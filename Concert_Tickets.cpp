#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    multiset<int> p;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        p.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        auto it = p.upper_bound(x);
        if(it == p.begin()){
            cout << -1 << endl;
        }else{
            --it;
            cout << *it << endl;
            p.erase(it);
        }
    }
}