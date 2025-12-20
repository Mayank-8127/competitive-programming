#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1), p(n+1);
    a[0] = 0;
    p[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        p[a[i]] = i;
    }
    int c = 1;
    for(int i = 2; i <= n; i++){
        if(p[i] < p[i-1]){
            c++;
        }
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        int p1 = a[x];
        int p2 = a[y];
        set<pair<int,int>> pairs;
        if(p1 > 1) pairs.insert({p1 - 1, p1});
        if(p1 < n) pairs.insert({p1, p1 + 1});
        if(p2 > 1) pairs.insert({p2 - 1, p2});
        if(p2 < n) pairs.insert({p2, p2 + 1});
        for (auto j : pairs) {
            if (p[j.first] > p[j.second]) {
                c--;
            }
        }

        swap(a[x], a[y]);
        p[p1] = y;
        p[p2] = x;

        for (auto j : pairs) {
            if (p[j.first] > p[j.second]) {
                c++;
            }
        }
        cout << c << endl;
        // if(p[p1-1] > p[p1]){
        //     c--;
        // }
        // if(p1 < n && p[p1] > p[p1+1]){
        //     c--;
        // }
        // if(p[p2-1] > p[p2]){
        //     c--;
        // }
        // if(p2 < n && p[p2] > p[p2+1]){
        //     c--;
        // }
        // int temp = p[p1];
        // p[p1] = p[p2];
        // p[p2] = temp;
        // temp = a[x];
        // a[x] = a[y];
        // a[y] = temp;
        // if(p[p1-1] >= p[p1]){
        //     c++;
        // }
        // if(p1 < n && p[p1] >= p[p1+1]){
        //     c++;
        // }
        // if(p[p2-1] >= p[p2]){
        //     c++;
        // }
        // if(p2 < n && p[p2] >= p[p2+1]){
        //     c++;
        // }
        // cout << c << endl;
    }
    
}

