#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    set<int> light;
    multiset<int> dis;
    dis.insert(x);
    light.insert(0);
    light.insert(x);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        auto it = light.upper_bound(t);
        int right = *it;
        int left = *(--it);
        dis.erase(dis.find(right-left));
        dis.insert(right-t);
        dis.insert(t-left);
        light.insert(t);
        cout << *dis.rbegin() << ' ';
    }

}