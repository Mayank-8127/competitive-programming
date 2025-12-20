#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        auto it = m.upper_bound(x);
        if(it == m.end()){
            m.insert(x);
        }else{
            m.erase(it);
            m.insert(x); 
        }
    }
    cout << m.size();
}