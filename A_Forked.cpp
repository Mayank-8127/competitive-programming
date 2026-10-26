#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1,y1,x2,y2,x,y;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        set<pair<int,int>> s1,s2;
        s1.insert({x1+x, y1+y});
        s1.insert({x1+x, y1-y});
        s1.insert({x1-x, y1+y});
        s1.insert({x1-x, y1-y});
        s1.insert({x1+y, y1+x});
        s1.insert({x1+y, y1-x});
        s1.insert({x1-y, y1+x});
        s1.insert({x1-y, y1-x});

        s2.insert({x2+x, y2+y});
        s2.insert({x2+x, y2-y});
        s2.insert({x2-x, y2+y});
        s2.insert({x2-x, y2-y});
        s2.insert({x2+y, y2+x});
        s2.insert({x2+y, y2-x});
        s2.insert({x2-y, y2+x});
        s2.insert({x2-y, y2-x});

        int ans = 0;
        for(auto it1: s1){
            for(auto it2: s2){
                if(it1 == it2){
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}

